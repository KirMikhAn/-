#include <iostream>
#include <cstring>

class Next {
    protected:
    unsigned a;
    std::string c;
};

class Last : protected Next {
    private: 
    unsigned b;

    public:
    Last (unsigned a, unsigned b, std::string c){
        this->a = a;
        this->b = b;
        this->c = c;
    };

    void print() {
        std::cout<<a<<'\n'<<b<<'\n'<<c;
    };
};

int main() {
    Last sam{5, 10, "!@#"};
    sam.print();
}