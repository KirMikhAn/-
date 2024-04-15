#include <iostream>
#include <cstring>
class W {
    public:
        unsigned un;
        std::string str_1;
};

class Q: public W {
    private:
    std::string str_2;
    
    public:
    Q (unsigned un, std::string str_1, std::string str_2) {
        std::cout<<un<<'\t'<<str_1<<'\t'<<str_2<<std::endl;
    }
};

int main() {
    Q(5, "some","text");
}