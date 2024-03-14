#include <iostream>

class New {
    public:
    int q;
    int w;
};

int main() {
    New sam{5, 33};
    std::cout<<sam.q*2<<'\t'<<sam.w*2;
}