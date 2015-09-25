#include <nan.h>
#include "clock_isr.h"

volatile uint32_t clock = 0;

NAN_METHOD(GetTime) {
  info.GetReturnValue().Set(clock);
}

NAN_METHOD(SetTime) {
  clock = info[0]->Uint32Value();
  info.GetReturnValue().Set(clock);
}
