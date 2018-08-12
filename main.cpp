#include "stdafx.h"
#include "main.h"

int main() {
  SetConsoleOutputCP(CP_UTF8);
  setvbuf(stdout, nullptr, _IOFBF, 1024);

  std::string text = u8"Hello, World!\nこんにちは、世界！\n";
  std::cout << text;

  return 0;
}
