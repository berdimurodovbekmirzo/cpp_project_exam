#include "fix_me.h"
int X::x;
int X::y = 0;
int main() {
  std::cin >> X::x;
  const X a;
  a.Foo();
  a.Boo();
  std::cout << X::y << X::x << std::endl;
  return 0;
}