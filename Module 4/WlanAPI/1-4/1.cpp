#include <iostream>
#include <string>

class Next {
private:
    std::string name;
    std::string department;

public:
    Next(std::string n, std::string d) : name(n), department(d) {}

    void display() {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Отдел: " << department << std::endl;
    }
};

int main() {
    Next employee("Иванов", "Продажи");
    employee.display();

    return 0;
}
