//Name : Irene He He
//GitHub Name : Irene06he

#include <iostream>
#include <string>
#include "caesar.h"
#include "vigenere.h"
#include "funcs.h"

int main()
{
//task b
    std::cout<<encryptCaesar("Hello, World!", 10)<<std::endl;
    std::cout<<encryptCaesar("Way to go!", 5)<<std::endl;

// task c
    std::cout<<encryptVigenere("Hello,World!", "cake")<<std::endl;
    std::cout<<encryptVigenere("Way to go!", "cake")<<std::endl;

  return 0;
}
