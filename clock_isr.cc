#include <nan.h>
#include "clock_isr.h"
#include <mraa.h>
#include <mraa/gpio.h>

static volatile uint32_t counter = 0;

void interrupt(void* args) {
  if (counter == UINT_MAX) {
    counter = 0;
  } else {
    ++counter;
  }
}

NAN_METHOD(Init) {
  mraa_init();
  mraa_gpio_context x;

  x = mraa_gpio_init(2);
  mraa_gpio_dir(x, MRAA_GPIO_IN);
  gpio_edge_t edge = MRAA_GPIO_EDGE_RISING;
  mraa_gpio_isr(x, edge, &interrupt, NULL);
}

NAN_METHOD(GetTime) {
  info.GetReturnValue().Set(counter);
}

NAN_METHOD(SetTime) {
  counter = info[0]->Uint32Value();
  info.GetReturnValue().Set(counter);
}
