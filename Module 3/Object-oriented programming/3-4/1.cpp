#include <iostream>
#include <cstring>

class First {
    protected:
    std::string a;
};

class Second : protected First {
    private: 
    std::string b;

    public:
    Second(std::string a, std::string b){
        this->a = a;
        this->b = b;
    };

    void print() {
        std::cout<<a<<'\t'<<b;
    };
};

int main() {
    Second sam{"abc", "xyz"};
    sam.print();
}