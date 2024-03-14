#include <iostream>

class New {
    private:
    int a;
    int b;
    public: 

    void print() {
        std::cout<<a<<'\t'<<b;
    }

    New(int p_err, int p_err2){
        a = p_err;
        b = p_err2;
    };
};

int main() {
    New g{5, 10};
    g.print();
}