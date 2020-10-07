#include <iostream>
#include <string>

#include "vigenere.h"
#include "caesar.h"

//Task C
std::string encryptVigenere(std::string plaintext, std::string keyword){
  std::string result;
  std::string checked;
  for (int i=0; i<keyword.length();i++){  //make sure keyword only contains alpabets
    if(isalpha(std::tolower(keyword[i]))){ //make sure there is only lower case
      checked += std::tolower(keyword[i]);
    }
  }
  int num [checked.length()];
  for (int i=0; i<checked.length();i++){ //turn num[] into the shift according to keyword
    num[i] = (int)checked[i]-97;
  }
  int loop = 0;
  for (int i=0;i<plaintext.length();i++){
    if (loop > checked.length()-1){ //loops back the keyword when it reaches the last character
      loop = 0;
    }
    if(isalpha(plaintext[i])){  //shift if it is an alpabet
      result+= shiftChar(plaintext[i],num[loop]);
      loop ++;
    }
    else {
      result += plaintext[i]; //else don't change that character
    }
  }
  return result;
}
