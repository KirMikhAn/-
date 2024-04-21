#include <iostream>
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;
    std::cout << "Введите число: ";
    std::cin >> base;
    std::cout << "Введите степень: ";
    std::cin >> exponent;
    std::cout << "Результат возведения в степень: " << power(base, exponent) << std::endl;

    return 0;
}
