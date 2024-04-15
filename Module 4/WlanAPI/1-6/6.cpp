#include <iostream>
#include <stdexcept>

class NewException : public std::runtime_error {
public:
    NewException() : std::runtime_error("В программе инициализирован класс 'NewException'!") {}
};

int main() {
    try {
        throw NewException();
    } catch (const NewException& e) {
        std::cout << "Одно новое исключение: " << e.what() << std::endl;
    }

    return 0;
}
