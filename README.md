# FactoryMethodPatternBindingCompilationTime
It is decided during build time what instance is binded

## Bind build time
Factory method pattern is bound at object creation time.
But this is bound at build time using Makefile.

This is an example how to bind a network.


## Example
You can choose OS type as linux
`$ make OS=linux && ./main`

The result is
`$ Network for Linux`
