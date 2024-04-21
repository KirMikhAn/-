#include <iostream>

struct First {
    int a;
    int s;
};

int main() {
    First obj;
    std::cout << "Введите значение для 'a': ";
    std::cin >> obj.a;
    std::cout << "Введите значение для 's': ";
    std::cin >> obj.s;
    obj.a *= 3;
    obj.s *= 3;
    std::cout << "Значение 'a' после умножения на 3: " << obj.a << '\n';
    std::cout << "Значение 's' после умножения на 3: " << obj.s << '\n';

    return 0;
}
