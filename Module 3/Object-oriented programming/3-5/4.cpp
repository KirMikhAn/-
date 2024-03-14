#include <iostream>
#include <cstring>

class First {
    protected:
    std::string abc;
};

class Second : protected First {
    private: 
    float w;

    public:
    Second(std::string abc, float w){
        this->abc = abc;
        this->w = w;
    };

    void print() {
        std::cout<<abc<<'\t'<<w;
    };
};

int main() {
    Second sam{"abc", 35.5};
    sam.print();
}