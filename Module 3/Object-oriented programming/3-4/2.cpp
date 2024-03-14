#include <iostream>
#include <cstring>

class A {
    protected:
    std::string a;
    std::string c;
};

class B : protected A {
    private: 
    std::string b;

    public:
    B (std::string a, std::string b, std::string c){
        this->a = a;
        this->b = b;
        this->c = c;
    };

    void print() {
        std::cout<<a<<'\t'<<b<<'\t'<<c;
    };
};

int main() {
    B sam{"abc", "xyz", "!@#"};
    sam.print();
}