#include <iostream>

enum Last {
    a = 1,
    s = 2,
    d = 3 
};

int main() {
    std::cout << "Значение первого элемента перечисления: " << a << std::endl;
    std::cout << "Значение последнего элемента перечисления: " << d << std::endl;

    return 0;
}
