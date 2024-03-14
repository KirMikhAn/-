#include <iostream>
#include <cstring>

class W {
    protected:
    unsigned a;
    std::string c;
};

class Q : protected W {
    private: 
    std::string b;

    public:
    Q (unsigned a, std::string b, std::string c){
        this->a = a;
        this->b = b;
        this->c = c;
    };

    void print() {
        std::cout<<a<<'\n'<<b<<'\n'<<c;
    };
};

int main() {
    Q sam{5, "xyz", "!@#"};
    sam.print();
}