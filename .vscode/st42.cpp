#include <cctype>
#include <iostream>
int main() {
  std::cout << "A\n";                // A
  std::cout << tolower('A') << "\n"; // 97
  std::cout << char(tolower('A')) << "\n";
  std::cout << "\n=================\n";
  std::cout << "B\n";                // A
  std::cout << toupper('b') << "\n"; // 66
  std::cout << char(toupper('b')) << "\n";
  std::cout << char(tolower('B')) << "\n";
  std::string nameOne = "ElZEro";
  for (int i = 0; i < sizeof(nameOne) / sizeof(nameOne[0]); i++) {
    if (char(tolower(nameOne[i])) == nameOne[i]) {
      std::cout << char(toupper(nameOne[i]));
    } else if (char(toupper(nameOne[i])) == nameOne[i]) {
      std::cout << char(tolower(nameOne[i]));
    }
  }
  return 0;
}