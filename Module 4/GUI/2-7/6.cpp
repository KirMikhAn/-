#include <iostream>

struct First {
    int q;
    int w;
    int e;
};

int main() {
    First first;
    first.q = 1;
    first.w = 2;
    first.e = 3;
    first.q *= 4;
    first.w *= 4;
    first.e *= 4;
    std::cout << "q: " << first.q << "\n";
    std::cout << "w: " << first.w << "\n";
    std::cout << "e: " << first.e << "\n";

    return 0;
}
