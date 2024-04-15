#include <iostream>
#include <string>

class One {
    public:
        std::string def;
};

class Two: public One {
    private:
        float s;
    public:
        Two(std::string def, float s) {
            std::cout<<def<<'\t'<<s;
        }
};

int main() {
    Two one("hello", 42);
}