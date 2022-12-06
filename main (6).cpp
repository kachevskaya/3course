#include <iostream>
#include "Vector2.h"

int main (){
    Vector2 a(1.0, 2.0);
    std::cout << a.getLen() << std::endl;
    Vector2 b(2.0, 3.0);
    auto c = a+b;
    double aaa = 10;
    c = c * aaa;
    std::cout << c.x << std::endl;
    return 0;
}

















