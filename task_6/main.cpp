#include "fix_me.h"
int main() {
  int int_num;
  double real_num;
  char character;
  char str[20];
  std::cin >> int_num;
  std::cin >> real_num;
  std::cin >> character;
  std::cin >> str;
  f();
  f(real_num);
  f(int num, int_num);
  f(character, int_num);
  f(str);
  Index x(int_num);
  x++;
  ++x;
  std::cout << x.GetIndex();
  return 0;
}
