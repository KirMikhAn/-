#include <iostream>
#include <cstring>

class One {
    protected:
    std::string def;
};

class Two : protected One {
    private:
    float s;

    public:
    Two(std::string def, float s){
        this->def = def;
        this->s = s;
    };
    void print() {
        std::cout<<def<<'\t'<<s;
    };
};

int main() {
    Two sam{"sdsds", 10.10};
    sam.print(); 
}