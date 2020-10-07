#include <iostream>


#include "funcs.h"
#include "caesar.h"

int main()
{
  //Task B
  std::cout << encryptCaesar("A Light-Year Apart",5) <<"\n";
  std::cout << encryptCaesar("A Light-Year Apart",-25) << "\n";
  std::cout << encryptCaesar("Hello, World!", 10) << "\n";
  return 0;
}
