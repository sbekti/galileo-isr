#include <nan.h>
#include "clock_isr.h"

// volatile uint32_t ticks = 0;

NAN_METHOD(GetTime) {
  info.GetReturnValue().Set(ticks);
}

NAN_METHOD(SetTime) {
  int ticks = info[0]->Uint32Value();
  info.GetReturnValue().Set(ticks);
}
