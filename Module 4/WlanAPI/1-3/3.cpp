#include <iostream>
#include <string>

unsigned long f(unsigned x) {
    if (x>1)
        return x * f(x-1);
    return 1;
}

int main() {
unsigned x = 5;
unsigned result = f(x);
std::cout<<result;
}
