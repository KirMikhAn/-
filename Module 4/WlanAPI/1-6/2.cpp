#include <iostream>

class First {
protected:
    float a;

public:
    First(float val) : a(val) {}
};

class Second : public First {
private:
    float b;

public:
    Second(float val1, float val2) : First(val1), b(val2) {}

    void display() {
        std::cout << "Значение a: " << a << std::endl;
        std::cout << "Значение b: " << b << std::endl;
    }
};

int main() {
    Second obj(3.14f, 2.71f);
    obj.display();

    return 0;
}
