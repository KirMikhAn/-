#include <iostream>

class Next {
public:
    unsigned w;
};

class Last : public Next {
public:
    unsigned g;

    void display() {
        std::cout << "Значение w: " << w << std::endl;
        std::cout << "Значение g: " << g << std::endl;
    }
};

int main() {
    Last obj;
    std::cout << "Введите значение для 'w': ";
    std::cin >> obj.w;
    std::cout << "Введите значение для 'g': ";
    std::cin >> obj.g;
    obj.display();

    return 0;
}
