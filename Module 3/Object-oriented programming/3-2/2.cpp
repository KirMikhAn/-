#include <iostream>
#include <string>

class Next {
    private: 
    std::string name;
    std::string department;

    public:
    Next(std::string a, std::string b) {
        name = a;
        department = b;
    }
    void print() {
        std::cout<<name<<'\t'<<department<<std::endl;
    }

};

int main() {
    Next sam{"Sam", "LSPD"};
    sam.print();
}