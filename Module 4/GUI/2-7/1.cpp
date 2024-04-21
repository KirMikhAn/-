#include <iostream>
#include <string>

class One {
public:
    std::string def;
};

class Two : public One {
public:
    float s;

    void display() {
        std::cout << "Значение def: " << def << std::endl;
        std::cout << "Значение s: " << s << std::endl;
    }
};

int main() {
    Two obj;
    std::cout << "Введите значение для 'def': ";
    std::cin >> obj.def;
    std::cout << "Введите значение для 's': ";
    std::cin >> obj.s;
    obj.display();
    return 0;
}
