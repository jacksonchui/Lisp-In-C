# Building LISP in C

## Student Notes

### Chapter 4

To use `editline`, include `<editline/readline.h>` and link and compile with the following: `cc --std=c99 -o prompt prompt.c -ledit`. On macOS, adding `ledit` to the linker command adds the `libedit.dylib`, which comes with GNU readline and history libraries and is default on the mac.

Adding `-g` as an arg allows you to use *lldb* or *gdb* in order to debug your program.