cmake_minimum_required(VERSION 3.19)
project(qjs_CLion C)

set(CMAKE_C_STANDARD 11)

set(LIB_FILES src/cutils.c src/quickjs.c src/quickjs-libc.c src/libregexp.c src/libunicode.c src/libbf.c)

set(BITECODE_FILES src/qjscalc.c src/repl.c)
set(QJS_SOURCE_FILES src/qjs.c ${LIB_FILES} ${BITECODE_FILES} src/qjs-vm.c src/qjs-vm.h)
add_executable(qjs_CLion ${QJS_SOURCE_FILES})

