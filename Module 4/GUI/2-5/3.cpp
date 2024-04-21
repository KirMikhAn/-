#include <iostream>

class First_One {
public:
    unsigned q;
};

class Second_One : public First_One {
public:
    unsigned x;

    void display() {
        std::cout << "Значение q: " << q << std::endl;
        std::cout << "Значение x: " << x << std::endl;
    }
};

int main() {
    Second_One obj;
    std::cout << "Введите значение для 'q': ";
    std::cin >> obj.q;
    std::cout << "Введите значение для 'x': ";
    std::cin >> obj.x;
    obj.display();

    return 0;
}
