#include <iostream>

class Next {
    public:
    int one;
    char two;
};

int main() {
    Next sam{5, 33};
    std::cout<<sam.one<<'\t'<<sam.two;
}