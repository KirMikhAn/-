#include <iostream>

class First {
public:
    float a;
    First(float a) : a(a) {}
};

class Second : public First {
public:
    float b;
    Second(float a, float b) : First(a), b(b) {}

    void display() {
        std::cout << "Значение переменной 'a': " << a << std::endl;
        std::cout << "Значение переменной 'b': " << b << std::endl;
    }
};

int main() {
    float a, b;
    std::cout << "Введите значение для 'a': ";
    std::cin >> a;
    std::cout << "Введите значение для 'b': ";
    std::cin >> b;

    Second s(a, b);
    s.display();

    return 0;
}
