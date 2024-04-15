#include <iostream>
#include <cstring>
class Next {
    public:
        std::string str_1;
};

class Last: public Next {
    private:
    std::string str_2;
    
    public:
    Last (std::string str_1, std::string str_2) {
        std::cout<<str_1<<'\t'<<str_2<<std::endl;
    }
};

int main() {
    Last a("some","text");
}