#include <iostream>
#include <string>
class First {
    private: 
    int a;
    int b;

    public:
    
    First(int err_a, int err_b) {
        a = err_a;
        b = err_b;
    }
    void print(int modifier = 1) {
        std::cout<<a*modifier<<'\t'<<b*modifier<<std::endl;
    }

};

int main() {
    First sam{1, 2};
    sam.print();
    sam.print(2);
}