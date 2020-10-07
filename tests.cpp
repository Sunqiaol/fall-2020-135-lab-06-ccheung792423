#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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
