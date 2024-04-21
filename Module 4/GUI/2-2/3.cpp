#include <iostream>
#include <string>

class New {
private:
    std::string name;
    std::string surname;

public:
    void setName(const std::string& n) {
        name = n;
    }

    void setSurname(const std::string& s) {
        surname = s;
    }

    void display() {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Фамилия: " << surname << std::endl;
    }
};

int main() {
    New obj;
    obj.setName("Иван");
    obj.setSurname("Иванов");
    obj.display();

    return 0;
}
