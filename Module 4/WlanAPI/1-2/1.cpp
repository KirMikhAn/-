#include <iostream>
#include <string>

class CObject {
    private:
        std::string name;

    public:
        CObject(const std::string&name) : name(name) {}
        virtual ~CObject() {}
};

int main() {
    char q[8]={'a','b','c','d','e','f','g','h'};

    for (int i=0; i<7; i++)
    {
        std::cout<<q[i];
    };

}