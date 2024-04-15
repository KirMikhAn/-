#include <iostream>
#include <string>

class One {
public:
    std::string def;

    One(std::string d) : def(d) {} 
};

class Two : public One {
public:
    float s;

    Two(std::string d, float s_value) : One(d), s(s_value) {}

    void display() {
        std::cout << "def: " << def << "\ns: " << s << std::endl;
    }
};

int main() {
    std::string input_def;
    float input_s;

    std::cout << "Введите значение для def: ";
    std::cin >> input_def;
    std::cout << "Введите значение для s: ";
    std::cin >> input_s;

    Two t(input_def, input_s);
    t.display();

    return 0;
}
