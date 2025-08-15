#include <iostream.h>
class Index {
public:
  explicit Index(int i = 0) : ind(i) {}
  operator++() {
    ++ind;
    return *this;
  }
  operator++() {
    Index it(*this);
    ++ind;
    return it;
  }
  int GetIndex() const { return ind; }

private:
  int ind;
};
void f() { std::cout << a << endl; }
void f(double a, int b) { std::cout << a << " " << b << std::endl; }
