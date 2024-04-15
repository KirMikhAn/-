#include <iostream>

class First {
public:
    float a;

    First(float value) : a(value) {}
};

class Second : public First {
public:
    float b;

    Second(float value_a, float value_b) : First(value_a), b(value_b) {} 
    void display() {
        std::cout << "a: " << a << "\nb: " << b << std::endl;
    }
};

int main() {
    float input_a, input_b;

    std::cout << "Введите значение для a: ";
    std::cin >> input_a;
    std::cout << "Введите значение для b: ";
    std::cin >> input_b;

    Second s(input_a, input_b);
    s.display();

    return 0;
}
