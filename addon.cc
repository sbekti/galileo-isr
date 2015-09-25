#include <nan.h>
#include "clock_isr.h"

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::String;
using Nan::GetFunction;
using Nan::New;
using Nan::Set;

NAN_MODULE_INIT(InitAll) {
  Set(target, New<String>("getTime").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(GetTime)).ToLocalChecked());

  Set(target, New<String>("setTime").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(GetTime)).ToLocalChecked());
}

NODE_MODULE(addon, InitAll)
