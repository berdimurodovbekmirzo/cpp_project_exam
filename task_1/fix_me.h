#include <iostream>

class X {
public:
  static int x;
  static int y;
  X() { this->z = 0; }
  void Foo() const { std::cout << this->x; }
  void Boo() const { std::cout << this->z; }

private:
  int z;
};
