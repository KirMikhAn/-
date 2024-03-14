#include <iostream>

class Second {
    public:
    int q,w;
};

int main() {
    Second sam{5, 10};
    std::cout<<sam.q*10<<'\t'<<sam.w*10;
}