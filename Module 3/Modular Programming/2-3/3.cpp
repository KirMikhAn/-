#include <iostream>

int sum(int, int);

int main() {
    int lb, rb;
    std::cin>>lb>>rb;
    std::cout<<'\n';
    std::cout<<sum(lb,rb);
}

int sum(int lb, int rb) {
    if (rb>lb)
        return lb+rb+sum(lb+1,rb-1);
    return lb;
}