#include <iostream>
#include <string>

struct New {
    std::string first; 
    std::string second;
    std::string last;  
};

int main() {
    New obj;
    obj.first = "Привет";
    obj.second = "мир";
    obj.last = "!";
    std::cout << "Первая строка: " << obj.first << '\n';
    std::cout << "Вторая строка: " << obj.second << '\n';
    std::cout << "Третья строка: " << obj.last << '\n';

    return 0;
}
