#include "code_me.h"
#include <iostream>

int main() {
  int num1, num2;
  std::cin >> num1;
  std::cin >> num2;
  X instance1(num1), instance2 = num2, instance3(instance1);
  instance2++;
  ++instance3;
  X instance4 = instance1 + instance3;
  instance4++;
  std::cout << instance1.get() << " " << instance2.get() << " ";
  std::cout << instance3.get() << " " << instance4.get() << std::endl;
  return 0;
}