// Include a function to say hello from source

#include <iostream>

#include "hello.hh"

void usage(){
    std::cout << "Usage:\n\nhello <name>" << std::endl;
}


int main(int argc, char* argv[]){
    
    if (argc != 2){
        usage();
        exit(1);
    }

    say_hello(argv[1]);

    return 0;
}
