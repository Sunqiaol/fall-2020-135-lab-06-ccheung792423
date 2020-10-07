#include <iostream>
#include <string>

#include "caesar.h"

//Task B
char shiftChar(char c, int rshift){ 
  int cha = (int)c+rshift;
  if (c >= 'A' && c <= 'Z'){ //original is upper case
    if (cha < 'A'){ //the character is shifted too much (-)
      while (cha < 'A'){
	cha+= 26;
      }
       //± 26 until it is a upper case alpabet
    }
    else if (cha > 'Z'){ //character is shifted too much (+)
      while (cha > 'Z'){
	cha-= 26;
      }
    }
  }
  else { //original is lower case
    if (cha > 'z'){  //the character is shifted too much (+)
      while (cha > 'z'){
	cha-= 26;
      } //± 26 until it is a lower case alpabet
    }
    else if (cha < 'a'){ //character is shifted too much (-)
      while (cha < 'a'){
	cha+= 26;
      }
    }
  }
  return cha; //return the shifted character
}

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string result;
  for (int i=0;i<plaintext.length();i++){  //go through every character of plaintext
    if(isalpha(plaintext[i])){ //shift only if it is an alpabet
      result+= shiftChar(plaintext[i],rshift);
    }
    else {
      result += plaintext[i];
    }
  }
  return result;
}
