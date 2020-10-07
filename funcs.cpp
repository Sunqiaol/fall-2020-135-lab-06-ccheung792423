#include <iostream>
#include <string>

#include "funcs.h"

//Task A
void test_ascii(){
  
}
/*
char shiftChar(char c, int rshift){ //precondition: c is an alpabet
  int cha = (int)c+rshift;
  if (c >= 'A' && c <= 'Z'){ //original is lower case
    low = false;
    if (cha < 'A'){ 
      return shiftChar((cha+26),0); //± 26 until it is a upper case alpabet
    }
    else if (cha > 'Z'){
      return shiftChar((cha-26),0);
    }
  }
  else { //original is upper case
    if (cha > 'z'){
      return shiftChar((cha-26),0); //± 26 until it is a lower case alpabet
    }
    else if (cha < 'a'){
      return shiftChar((cha+26),0);
    }
  }
  return cha;
}
//Task B
std::string encryptCaesar(std::string plaintext, int rshift){
  std::string result;
  for (int i=0;i<plaintext.length();i++){
    if(isalpha(plaintext[i])){
      result+= shiftChar(plaintext[i],rshift);
    }
    else {
      result += plaintext[i];
    }
  }
  return result;
}
*/



