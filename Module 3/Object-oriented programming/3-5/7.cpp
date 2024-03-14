#include <iostream>
#include <cstring>

class G {
    protected:
    unsigned s;
    std::string ss;
};

class H : protected G {
    private: 
    std::string f;

    public:
    H(unsigned s, std::string ss, std::string f){
        this->s = s;
        this->ss = ss;
        this->f = f;
    };

    void print() {
        std::cout<<s<<'\n'<<ss<<'\n'<<f;
    };
};

int main() {
    H sam{5, "!=", "five"}; 
    sam.print();
}