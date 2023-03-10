#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "funcs.h"

// add your tests here
//task b
TEST_CASE("caesar") {
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

//task c
TEST_CASE("vigenere") {
  CHECK(encryptVigenere("Hello,World!", "cake") == "Jevpq,Wyvnd!");
  CHECK(encryptVigenere("Way to go!", "cake") == "Yai xq gy!");
}