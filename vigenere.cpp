//Name : Irene He He
//GitHub Name : Irene06he 

#include <iostream>
#include <string>
#include "caesar.h"
#include "vigenere.h"
#include "funcs.h"


std::string encryptVigenere(std::string plaintext, std::string keyword){
  int key = 0;
  std::string vigenere_text;
    for (int i = 0; i < plaintext.length(); i++)
    {
      if (key >= keyword.length()){
         key = 0;
      }
      if (isalpha(plaintext[i])){
        vigenere_text += shiftChar(plaintext[i], keyword[key]-'a');
        key++;}
      else {
        vigenere_text += plaintext[i];
      }
      }
      return vigenere_text;
  }