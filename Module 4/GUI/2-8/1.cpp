#include <iostream>
class First {
public:
    float a;
};
class Second : public First {
public:
    float b;

    void display() {
        std::cout << "Значение 'a': " << a << "\n";
        std::cout << "Значение 'b': " << b << "\n";
    }
};

int main() {
    Second second;
    second.a = 1.23f;
    second.b = 4.56f;
    second.display();
    return 0;
}
