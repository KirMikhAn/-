#include <iostream>

enum New {
    a = 1,
    b = 2,
    c = 3
};

int main() {
    std::cout << "Значение a: " << a << std::endl;
    std::cout << "Значение b: " << b << std::endl;
    std::cout << "Значение c: " << c << std::endl;

    return 0;
}
