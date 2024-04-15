#include <iostream>
#include <cmath>

int main() {
    double num1 = 14.0;
    double num2 = 16.0;
    double num3 = 23.0;

    double sqrt_num1 = std::sqrt(num1);
    double sqrt_num2 = std::sqrt(num2);
    double sqrt_num3 = std::sqrt(num3);

    std::cout << "Квадратный корень числа 14: " << sqrt_num1 << std::endl;
    std::cout << "Квадратный корень числа 16: " << sqrt_num2 << std::endl;
    std::cout << "Квадратный корень числа 23: " << sqrt_num3 << std::endl;

    return 0;
}
