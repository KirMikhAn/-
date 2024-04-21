#include <iostream>
enum Last {
    a = 1,
    s = 2,
    d = 3
};

int main() {
    std::cout << "Значение первого элемента: " << a << "\n";
    std::cout << "Значение последнего элемента: " << d << "\n";
    return 0;
}
