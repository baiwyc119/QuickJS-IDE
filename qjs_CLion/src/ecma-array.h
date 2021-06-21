//
// Created by benpeng.jiang on 2021/6/20.
//

#ifndef LOX_JS_ECMA_ARRAY_H
#define LOX_JS_ECMA_ARRAY_H
#include "qjs-api.h"


typedef struct JSArrayIteratorData {
    JSValue obj;
    JSIteratorKindEnum kind;
    uint32_t idx;
} JSArrayIteratorData;


static JSValue js_array_buffer_constructor3(JSContext *ctx,
                                            JSValueConst new_target,
                                            uint64_t len, JSClassID class_id,
                                            uint8_t *buf,
                                            JSFreeArrayBufferDataFunc *free_func,
                                            void *opaque, BOOL alloc_flag);
static JSArrayBuffer *js_get_array_buffer(JSContext *ctx, JSValueConst obj);
static JSValue js_typed_array_constructor(JSContext *ctx,
                                          JSValueConst this_val,
                                          int argc, JSValueConst *argv,
                                          int classid);
 BOOL typed_array_is_detached(JSContext *ctx, JSObject *p);
 uint32_t typed_array_get_length(JSContext *ctx, JSObject *p);
 BOOL js_get_fast_array(JSContext *ctx, JSValueConst obj,
                              JSValue **arrpp, uint32_t *countp);
 no_inline int js_realloc_array(JSContext *ctx, void **parray,
                                      int elem_size, int *psize, int req_size);
/* resize the array and update its size if req_size > *psize */
  int js_resize_array(JSContext *ctx, void **parray, int elem_size,
                                  int *psize, int req_size);
 JSValue js_create_array(JSContext *ctx, int len, JSValueConst *tab);


 void js_array_iterator_finalizer(JSRuntime *rt, JSValue val);
 void js_array_iterator_mark(JSRuntime *rt, JSValueConst val,
                                   JS_MarkFunc *mark_func);
#endif //LOX_JS_ECMA_ARRAY_H
