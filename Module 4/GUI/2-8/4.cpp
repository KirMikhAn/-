#include <iostream>

struct First {
    int a;
    int s;
};

int main() {
    First first;
    first.a = 1;
    first.s = 2;
    first.a *= 3;
    first.s *= 3;
    std::cout << "a: " << first.a << "\n";
    std::cout << "s: " << first.s << "\n";

    return 0;
}
