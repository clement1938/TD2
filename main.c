#include <iostream>
#include "sum.h"

int main() {
    int a = 10;
    int b = 13;
    int result = sum(a, b);
    std::cout << "La somme de " << a << " et " << b << " est " << result << std::endl;
    return 0;
}