# Hello func example

For versions 1 and 2, note that the included file is actually a single `.h` rather than `.hh` in version 3. The difference is versions 1 and 2 are the complete implementation in the `.h` file, whereas in version 3 the header is `.hh` and implementation is in `.cpp`.

* In version 1, cannot be compiled 
* In version 2, can be compiled fully with `g++ -o hello main.cpp`, and the search through `/usr/include` will pick up `hello.h`
* In version 3, can be compiled with `g++ -c -o main.o main.cpp`, which will pick up the header file from `/usr/include`, and the linking of the underling library can be done with `g++ -o hello main.o -lHello`, which will finish the job and give us an executable


