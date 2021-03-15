// A basic source code file as an example of:

// - dpkg'ing
// - installing
// - including and using

#include <iostream>
#include <string>

#include "hello.hh"

void say_hello(std::string name){
    std::cout << "Hello " << name << "!" << std::endl;
}
