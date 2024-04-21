#include <iostream>
unsigned long long x(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * x(n - 1);
    }
}

int main() {
    int num = 12;
    std::cout << "Факториал числа " << num << " равен " << x(num) << std::endl;
    return 0;
}
