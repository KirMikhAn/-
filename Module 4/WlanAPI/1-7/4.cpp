#include <iostream>
#include <cstring>
class Next {
    public:
        unsigned w;
};

class Last: public Next {
    private:
    unsigned g;
    
    public:
    Last(unsigned w, unsigned g) {
        std::cout<<w<<'\t'<<g<<std::endl;
    }
};

int main() {
    Last(5, 10);
}