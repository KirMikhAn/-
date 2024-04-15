#include <iostream>

class A {
    public:
        unsigned e;
};

class B: public A {
    private:
        unsigned h;
    public:
        B(unsigned e, unsigned h) {
            std::cout<<"e: "<<e<<'\t'<<"h: "<<h<<std::endl;
        }
};

int main() {
    B test(5,10);
}