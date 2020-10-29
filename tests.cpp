#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"

//Task B
TEST_CASE ("Task B: Regular Cases"){
  CHECK(encryptCaesar("Runway's Fantasista",3) == "Uxqzdb'v Idqwdvlvwd");
  CHECK(encryptCaesar("rasion d'etre", 4) == "vewmsr h'ixvi");
  CHECK(encryptCaesar("Hello, World!",9) == "Qnuux, Fxaum!");
}
TEST_CASE ("Task B: String has no alpabet"){
  CHECK(encryptCaesar("123 456 789 10",6) == "123 456 789 10");
  CHECK(encryptCaesar("!@#$%^&*()",7) == "!@#$%^&*()");
  CHECK(encryptCaesar("頑張る",8) == "頑張る");
}
TEST_CASE("Task B: Shift is a large number"){
  CHECK(encryptCaesar("A Light-Year Apart",25) == "Z Khfgs-Xdzq Zozqs");
  CHECK(encryptCaesar("@hunter.cuny.edu",30) == "@lyrxiv.gyrc.ihy");
  CHECK(encryptCaesar("Time is now 17:06",19) == "Mbfx bl ghp 17:06");
}
TEST_CASE("Task B: Negative shift"){
  CHECK(encryptCaesar("Heterostasis",-100) == "Lixivswxewmw");
  CHECK(encryptCaesar("Red Balloon", -5) == "Mzy Wvggjji");
  CHECK(encryptCaesar("Recollection Endroll", -17) == "Anlxuunlcrxw Nwmaxuu");
}
TEST_CASE("Task B: Empty String"){
  CHECK(encryptCaesar("",2) == "");
}

//Task C
TEST_CASE("Task C: Regular Cases"){
  CHECK(encryptVigenere("Gather Round", "luck") == "Ruvrpl Tyfhf");
  CHECK(encryptVigenere("Gray and Blue", "fixer") == "Lzxc rsl Yplj");
  CHECK(encryptVigenere("Dream Eater", "alibi") == "Dcmbu Elbfz");
}
TEST_CASE("Task C: Keyword is longer than plaintext"){
  CHECK(encryptVigenere("Venom", "Kairiki") == "Fevfu");
  CHECK(encryptVigenere("World", "Domination") == "Zcdtq");
  CHECK(encryptVigenere("Eve", "Dramaturgy") == "Hme");
}
TEST_CASE("Task C: Plaintext contains no alpabet"){
  CHECK(encryptVigenere("!@#$", "please") == "!@#$");
  CHECK(encryptVigenere("233 333", "laugh") == "233 333");
  CHECK(encryptVigenere("赤い風船", "Red Balloon") == "赤い風船");
}
TEST_CASE("Task C: Empty String"){
  CHECK(encryptVigenere("","") == "");
}

//Task D
TEST_CASE("Task D: Caesar"){
  CHECK(decryptCaesar("Uxqzdb'v Idqwdvlvwd",3) == "Runway's Fantasista");
  CHECK(decryptCaesar("123 456 789 10",6) == "123 456 789 10");
  CHECK(decryptCaesar("Z Khfgs-Xdzq Zozqs",25) == "A Light-Year Apart");
  CHECK(decryptCaesar("Lixivswxewmw",-100) == "Heterostasis");
  CHECK(decryptCaesar("",2) == "");
}
TEST_CASE("Task D: Vigenere"){
  CHECK(decryptVigenere("Ruvrpl Tyfhf", "luck") == "Gather Round");
  CHECK(decryptVigenere("Fevfu", "Kairiki") == "Venom");
  CHECK(decryptVigenere("!@#$", "please") == "!@#$");
  CHECK(decryptVigenere("","") == "");
}

//Decode.cpp
//cited from Liberty- The American Revolution part 1
TEST_CASE("Decode with letter frequency"){
  CHECK(decode(encryptCaesar("Hello I'm Forrest Sawyer. Welcome to our series Liberty",12)) == "Hello I'm Forrest Sawyer. Welcome to our series Liberty");
  CHECK(decode(encryptCaesar("We live in a time of fast breaking news,",43)) == "We live in a time of fast breaking news,");
  CHECK(decode(encryptCaesar("which seems very far from the 18th century world the subject of this series.", 21)) == "which seems very far from the 18th century world the subject of this series.");
}
