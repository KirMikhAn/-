#include <iostream> 

int f(int num);

int main() {
    int num = 5;
    std::cout<<f(num);
}

int f(int num) {
    return num==1?1:num*f(num-1);
}