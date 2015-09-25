#include <nan.h>
#include "clock_isr.h"

volatile uint32_t time = 0;

NAN_METHOD(GetTime) {
  info.GetReturnValue().Set(time);
}

NAN_METHOD(SetTime) {
  time = info[0]->Uint32Value();
  info.GetReturnValue().Set(time);
}
