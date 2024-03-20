#include <iostream>
#include "lib.h"

int main() {

    int premier;
    int deuxieme;
    std::cout << "Entrez le premier nombre :";
    std::cin >> premier;
    std::cout << "Entrez le deuxieme nombre :";
    std::cin >> deuxieme;
    int result = maximum(premier, deuxieme);
    std::cout << "Le plus grand nombre entre " << premier << " et " << deuxieme << " est : " << result << std::endl;

    return 0;
}