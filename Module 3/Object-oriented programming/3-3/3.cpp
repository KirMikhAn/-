#include <iostream>
#include <cstring>

class Next {
    protected:
    std::string str_1;
};

class Last : protected Next {
    private:
    std::string str_2;

    public:
    Last(std::string str_1, std::string str_2){
        this->str_1 = str_1;
        this->str_2 = str_2;
    };
    void print() {
        std::cout<<str_1<<'\t'<<str_2;
    };
};

int main() {
    Last sam{"sdsds", "asdas"};
    sam.print(); 
}