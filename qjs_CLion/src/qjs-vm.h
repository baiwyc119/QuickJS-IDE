//
// Created by benpeng.jiang on 2021/6/18.
//

#ifndef QJS_CLION_QJS_VM_H
#define QJS_CLION_QJS_VM_H
#include "qjs-api.h"
#include "qjs-internal.h"

JSValue JS_CallInternal(JSContext *ctx, JSValueConst func_obj,
                        JSValueConst this_obj, JSValueConst new_target,
                        int argc, JSValue *argv, int flags);

#endif //QJS_CLION_QJS_VM_H
