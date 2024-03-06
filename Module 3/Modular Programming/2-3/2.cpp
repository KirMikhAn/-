#include <iostream>

int f(int);
int main() {
    int num = 6;
    std::cout<<f(num);
    std::cout<<std::endl<<"Работа программы завершена!";
}

int f(int num) {
    if (num > 1)
        return num*f(num-1);
    return 1;
}