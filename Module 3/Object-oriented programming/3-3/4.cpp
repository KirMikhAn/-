#include <iostream>
#include <cstring>

class Next {
    protected:
    unsigned w;
};

class Last : protected Next {
    private:
    unsigned g;

    public:
    Last(unsigned w, unsigned g){
        this->w = w;
        this->g = g;
    };
    void print() {
        std::cout<<w<<'\t'<<g;
    };
};

int main() {
    Last sam{5, 10};
    sam.print(); 
}