# Version 3: Library format

* works as hello.hh file is on include path
* must link with `-lHello`, ie `g++ -c -o main.o main.cpp && g++ -o hello main.o -lHello`
* I don't think it would work without the hh file in `usr/include`, need to have header file to compile the main.cpp file to object first, otherwise it wouldn't know what `say_hello` function is at all, regardless of the implementation being in the `/usr/lib` directory. That's a link time feature, so it has to know the symbol exists before it can link. Not verified, but this checks out for me at least.

```
hellofunc_1.0-3
├── DEBIAN
│   └── control
├── README.md
└── usr
    ├── include
    │   └── hello.hh
    └── lib
        └── libHello.a
```
