#include "lib.h"

int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else if (a == b) {
        return 0;
    } else {
        return b;
    }
}