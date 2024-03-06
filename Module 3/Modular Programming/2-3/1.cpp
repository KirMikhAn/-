#include <iostream>

int f(int);
int main() {
    int num = 3;
    std::cout<<f(num);
}

int f(int num) {
    if (num > 1)
        return num*f(num-1);
    return 1;
}