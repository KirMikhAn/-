#include <iostream>
#include <string>

class Next {
public:
    std::string str_1;

    Next(std::string s) : str_1(s) {}
};

class Last : public Next {
public:
    std::string str_2;

    Last(std::string s1, std::string s2) : Next(s1), str_2(s2) {}

    void display() {
        std::cout << "str_1: " << str_1 << "\nstr_2: " << str_2 << std::endl;
    }
};

int main() {
    std::string input1, input2;

    std::cout << "Введите значение для str_1: ";
    std::cin >> input1;
    std::cout << "Введите значение для str_2: ";
    std::cin >> input2;

    Last l(input1, input2);
    l.display();

    return 0;
}
