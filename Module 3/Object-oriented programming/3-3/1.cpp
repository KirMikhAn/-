#include <iostream>

class First {
    protected:
    float a;
};

class Second : protected First {
    private:
    float b;

    public:
    Second(float a, float b){
        this->a = a;
        this->b = b;
    };
    void print() {
        std::cout<<a<<'\t'<<b;
    };
};

int main() {
    Second sam{5.5, 10.10};
    sam.print(); 
}