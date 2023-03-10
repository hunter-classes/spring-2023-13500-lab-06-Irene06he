//Name : Irene He He
//GitHub Name : Irene06he


#include <iostream>
#include <string>
#include "caesar.h"
#include "vigenere.h"
#include "funcs.h"

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
  char value;
  if (isupper(c)){
    value = ((c-'A')+rshift)%26 + 'A';
    return value;
  }
  else if (islower(c)){
    value = ((c-'a')+rshift)%26+'a';
    return value;
  }
  else{
   return c;}
}

// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift){
  std::string text = "";
  for (int i = 0; i < plaintext.length();i++){
   text += shiftChar(plaintext[i], rshift);
  }
  return text;
}
