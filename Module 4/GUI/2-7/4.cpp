#include <iostream>
#include <string>

class First {
public:
    std::string var;
};

class Second {
public:
    std::string var;
};

int main() {
    First first_obj;
    Second second_obj;
    std::cout << "Введите значение для 'var' в классе First: ";
    std::cin >> first_obj.var;
    std::cout << "Введите значение для 'var' в классе Second: ";
    std::cin >> second_obj.var;
    std::cout << "Значение 'var' в классе First: " << first_obj.var << '\n';
    std::cout << "Значение 'var' в классе Second: " << second_obj.var << '\n';

    return 0;
}
