#include <iostream>
#include <string>

class W {
public:
    unsigned num;
    std::string str;
};

class Q {
public:
    std::string str;
};

int main() {
    W w_obj;
    Q q_obj;
    std::cout << "Введите значение для 'num': ";
    std::cin >> w_obj.num;
    std::cout << "Введите значение для 'str' в классе W: ";
    std::cin >> w_obj.str;
    std::cout << "Введите значение для 'str' в классе Q: ";
    std::cin >> q_obj.str;
    std::cout << "Значение 'num': " << w_obj.num << '\n';
    std::cout << "Значение 'str' в классе W: " << w_obj.str << '\n';
    std::cout << "Значение 'str' в классе Q: " << q_obj.str << '\n';

    return 0;
}
