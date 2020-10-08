#include <iostream>

#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  test_ascii();
  std::string str1 = "Alice in the ruin of a country";
  std::string str2 = "Everlasting Summer Skyscraper";
  std::string str3 = "Dusk, Mistaking it for a Dream";
  std::string str4 = "A Critical Hit";

  std::cout << "\nEncrypted via Caesar cipher encryption by a shift of 10 is:\n";
  std::cout << encryptCaesar(str1,10) << "\n\n";
  std::cout << "Decrypted is:\n";
  std::cout << decryptCaesar(encryptCaesar(str1,10),10) << "\n";
  std::cout << "-----------------------------------\n";

  std::cout << "Encrypted via Caesar cipher encryption by a shift of -10 is:\n";
  std::cout << encryptCaesar(str2,-10) << "\n\n";
  std::cout << "Decrypted is:\n";
  std::cout << decryptCaesar(encryptCaesar(str2,-10),-10) << "\n";
  std::cout << "-----------------------------------\n";

  std::cout << "Encrypted via Vigenere cipher encryption with the keyword \"atr\" is:\n";
  std::cout << encryptVigenere(str3,"atr") << "\n\n";
  std::cout << "Decrypted is:\n";
  std::cout << decryptVigenere(encryptVigenere(str3,"atr"),"atr") << "\n";
  std::cout << "-----------------------------------\n";

  std::cout << "Encrypted via Vigenere cipher encryption with the keyword \"moon\" is:\n";
  std::cout << encryptVigenere(str4,"moon") << "\n\n";
  std::cout << "Decrypted is:\n";
  std::cout << decryptVigenere(encryptVigenere(str4,"moon"),"moon") << "\n";
  std::cout << "-----------------------------------\n";

  return 0;
}
