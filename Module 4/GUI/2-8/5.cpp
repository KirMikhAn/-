#include <iostream>

int main() {
    char q[3] = {'a', 'b', 'c'};
    std::cout << "Значения до изменения: ";
    for (int i = 0; i < 3; i++) {
        std::cout << q[i] << " ";
    }
    std::cout << "\n";
    q[2] = '1';
    std::cout << "Значения после изменения: ";
    for (int i = 0; i < 3; i++) {
        std::cout << q[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
