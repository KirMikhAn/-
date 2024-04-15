#include <iostream>
#include <string>

class Last {
private:
    std::string surname;
    unsigned salary;
    unsigned department;

public:
    Last(std::string s, unsigned sal, unsigned dep) : surname(s), salary(sal), department(dep) {}

    void display() {
        std::cout << "Фамилия: " << surname << std::endl;
        std::cout << "Зарплата: " << salary << std::endl;
        std::cout << "Отдел: " << department << std::endl;
    }
};

int main() {
    Last employee("Иванов", 50000, 101);
    employee.display();

    return 0;
}
