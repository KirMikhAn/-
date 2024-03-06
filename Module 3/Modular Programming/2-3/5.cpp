#include <iostream>

int power(int num, int pow);

int main() {
    int num, pow;
    std::cin>>num>>pow;
    std::cout<<'\n'<<power(num, pow);
}

int power(int num, int pow) {
    return pow==1?num:pow==0?1:pow%2==0?power(num*num, pow/2):num*power(num*num, pow/2);
}
