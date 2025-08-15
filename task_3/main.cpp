#include <iostream>
#include "code_me.h"
int main(){
    int num1, num2, num3, num4;
    std::cin>>num1;
    std::cin>>num2;
    std::cin>>num3;
    std::cin>>num4;
    X instance1=num1, instance2(num2, num3), instance3(instance1);
    ++instance1;
    ++instance2;
    X instance4 = instance3+num4;
    std::cout<<instance.get()<<" "<<instance2.get()<<" ";
    std::cout<<instance.get()<<" "<<instance4.get()<<std::endl;
    return 0;
}