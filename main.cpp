#include <iostream>

#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  test_ascii();
  //Task B
  std::cout << encryptCaesar("A Light-Year Apart",5) <<"\n";
  std::cout << encryptCaesar("A Light-Year Apart",-25) << "\n";
  std::cout << encryptCaesar("Hello, World!", 10) << "\n";
  std::cout << encryptVigenere("Hello, World!","cake") << "\n";
  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy",5) << "\n";
  std::cout << decryptVigenere("Jevpq, Wyvnd!","cake") << "\n";
  return 0;
}
