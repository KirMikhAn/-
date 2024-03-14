#include <iostream>
#include <cstring>

class Class_C {
    protected:
    unsigned s;
};

class Class_D : protected Class_C {
    private: 
    unsigned f;

    public:
    Class_D(unsigned s, unsigned f){
        this->s = s;
        this->f = f;
    };

    void print() {
        std::cout<<s<<'\t'<<f;
    };
};

int main() {
    Class_D sam{5, 10}; 
    sam.print();
}