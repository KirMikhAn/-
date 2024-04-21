#include <iostream>

struct First {
    int q;
    int w;
    int e;
};

int main() {
    First obj;
    std::cout << "Введите значение для 'q': ";
    std::cin >> obj.q;
    std::cout << "Введите значение для 'w': ";
    std::cin >> obj.w;
    std::cout << "Введите значение для 'e': ";
    std::cin >> obj.e;
    obj.q *= 4;
    obj.w *= 4;
    obj.e *= 4;
    std::cout << "Значение 'q' после умножения на 4: " << obj.q << '\n';
    std::cout << "Значение 'w' после умножения на 4: " << obj.w << '\n';
    std::cout << "Значение 'e' после умножения на 4: " << obj.e << '\n';

    return 0;
}
