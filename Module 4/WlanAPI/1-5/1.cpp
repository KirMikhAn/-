#include <iostream>
#include <string>

class CObject {
protected:
std::string myobj="Это объект класса MyObject"; 
public:
    void show() {
        std::cout << "Это объект класса CObject" << std::endl;
    }
};

class MyObject : public CObject {
public:
    void show() {
        std::cout << myobj << std::endl;
    }
};

int main() {
    CObject obj1;
    MyObject obj2;

    obj1.show();
    obj2.show();

    return 0;
}
