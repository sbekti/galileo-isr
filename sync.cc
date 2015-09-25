#include <nan.h>
#include "sync.h"  // NOLINT(build/include)

NAN_METHOD(GetTime) {
  int points = info[0]->Uint32Value();
  info.GetReturnValue().Set(points + 1);
}
