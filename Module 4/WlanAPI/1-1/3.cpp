#include <iostream>
#include <cstring>
class W {
    public:
        unsigned s;
        std::string str_1;
};

class Q: public W {
    private:
    std::string str_2;
    
    public:
    Q (unsigned s, std::string str_1, std::string str_2) {
        std::cout<<s<<'\t'<<str_1<<'\t'<<str_2<<std::endl;
    }
};

int main() {
    Q a(2, "some","text");
}