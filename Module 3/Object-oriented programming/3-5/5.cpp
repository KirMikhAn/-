#include <iostream>
#include <cstring>

class Class_A {
    protected:
    std::string def_1;
};

class Class_B : protected Class_A {
    private: 
    std::string def_2;

    public:
    Class_B(std::string def_1, std::string def_2){
        this->def_1 = def_1;
        this->def_2 = def_2;
    };

    void print() {
        std::cout<<def_1<<'\t'<<def_2;
    };
};

int main() {
    Class_B sam{"abc", "xyz"};
    sam.print();
}