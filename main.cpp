// Basic counter with a sleep

#include <unistd.h>

#include <iostream>
#include <string>


void usage(void){
    std::cout << "./counter N"
              << "\nWhere N is a number to count to" << std::endl;
}

int main(int argc, char* argv[]){
    
    // Parse args
    if (argc != 2){ 
        std::cerr << "Incorrect number of arguments: " << argc << std::endl;
        usage();
        return 1;
    }
    
    int max = atoi(argv[1]);
    int start(1);

    // Count and print out
    while (start <= max){
        std::cout << "Number: " << start << std::endl;
        start++;
        sleep(1);
    }

    // That's it

    return 0;
}
