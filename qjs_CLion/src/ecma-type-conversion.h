//
// Created by benpeng.jiang on 2021/6/19.
//

#ifndef LOX_JS_TYPE_H
#define LOX_JS_TYPE_H

#include "qjs-api.h"
#include "qjs-vm.h"
#include "qjs-double.h"

JSValue JS_ToPrimitiveFree(JSContext *ctx, JSValue val, int hint);

JSValue JS_ToStringFree(JSContext *ctx, JSValue val);

JSValue JS_ToObject(JSContext *ctx, JSValueConst val);

JSValue JS_ToObjectFree(JSContext *ctx, JSValue val);

int JS_ToBoolFree(JSContext *ctx, JSValue val);

int JS_ToInt32Free(JSContext *ctx, int32_t *pres, JSValue val);

int JS_ToFloat64Free(JSContext *ctx, double *pres, JSValue val);

int JS_ToUint8ClampFree(JSContext *ctx, int32_t *pres, JSValue val);

 JSValue JS_ToLocaleStringFree(JSContext *ctx, JSValue val);

 JSValue JS_ToPrimitive(JSContext *ctx, JSValueConst val, int hint);
#endif //LOX_JS_TYPE_H
