#include <iostream>
#include <string>

#include "decrypt.h"
#include "caesar.h"

//Task D
std::string decryptCaesar(std::string ciphertext, int rshift){
  std::string result;
  for(int i=0; i<ciphertext.length();i++){
    if(isalpha(ciphertext[i])){
      result += shiftChar(ciphertext[i],-(rshift));
    }
    else {
      result += ciphertext[i];
    }
  }
  return result;
}
std::string decryptVigenere(std::string ciphertext, std::string keyword){
  std::string result;
  std::string checked;
  for (int i=0; i<keyword.length();i++){  //make sure keyword only contains alpabets
    if(isalpha(std::tolower(keyword[i]))){
      checked += keyword[i];
    }
  }
  int num [checked.length()];
  for (int i=0; i<checked.length();i++){ //turn num[] into the shift according to keyword
    num[i] = (int)checked[i]-97;
  }
  int loop = 0;
  for (int i=0;i<ciphertext.length();i++){
    if (loop > checked.length()-1){ //loops back the array
      loop = 0;
    }
    if(isalpha(ciphertext[i])){  //shift if it is an alpabet
      result+= shiftChar(ciphertext[i],-num[loop]);
      loop ++;
    }
    else {
      result += ciphertext[i];
    }
  }
  return result;
}
