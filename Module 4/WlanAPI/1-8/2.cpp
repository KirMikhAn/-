#include <iostream>

struct First {
    int a;
    int s;
};

int main() {
    First f;
    std::cout << "Введите значение для a: ";
    std::cin >> f.a;
    std::cout << "Введите значение для s: ";
    std::cin >> f.s;

    f.a *= 3;
    f.s *= 3;

    std::cout << "Измененное значение a: " << f.a << "\nИзмененное значение s: " << f.s << std::endl;

    return 0;
}
