#include <iostream>
#include <string>

#include "funcs.h"

//Task A
void test_ascii(){
  std::string str;
  std::cout << "Input: ";
  getline(std::cin, str);
  for (int i=0; i<str.length();i++){
    std::cout << str[i] << " " << (int)str[i] << "\n";
  }
  
}




