#include <iostream>
#include <stdexcept>

class MyExp : public std::runtime_error {
public:
    MyExp() : std::runtime_error("В программе инициализирован класс 'MyExp'!") {}
};

int main() {
    try {
        throw MyExp();
    } catch (const MyExp& e) {
        std::cout << "Новое исключение: " << e.what() << std::endl;
    }

    return 0;
}
