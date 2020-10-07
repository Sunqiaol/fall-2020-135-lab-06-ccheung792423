#include <iostream>

#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main()
{
  //Task B
  std::cout << encryptCaesar("A Light-Year Apart",5) <<"\n";
  std::cout << encryptCaesar("A Light-Year Apart",-25) << "\n";
  std::cout << encryptCaesar("Hello, World!", 10) << "\n";
  std::cout << encryptVigenere("jsdv","awekj");
  return 0;
}
