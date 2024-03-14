#include <iostream>
#include <string>
class Last {
    private: 
    std::string surname;
    unsigned salary;
    unsigned department;

    public:
    
    Last(std::string err_a, unsigned err_b, unsigned err_c) {
        surname = err_a;
        salary = err_b;
        department = err_c;
    }
    void print() {
        std::cout<<surname<<'\t'<<salary<<'\t'<<department<<std::endl;
    }

};

int main() {
    Last sam{"Sam", 350, 350};
    sam.print();
}