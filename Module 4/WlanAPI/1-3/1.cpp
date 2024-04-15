#include <iostream>
#include <cstring>
class First {
    public:
        std::string str_1;
};

class Second: public First {
    private:
    std::string str_2;
    
    public:
    Second (std::string str_1, std::string str_2) {
        std::cout<<str_1<<'\t'<<str_2<<std::endl;
    }
};

int main() {
    Second("some","text");
}