#include <iostream>
#include <string>

class Last {
private:
    std::string surname;
    unsigned salary;
    unsigned department;

public:
    void setSurname(const std::string& s) {
        surname = s;
    }

    void setSalary(unsigned s) {
        salary = s;
    }

    void setDepartment(unsigned d) {
        department = d;
    }

    void display() {
        std::cout << "Фамилия: " << surname << std::endl;
        std::cout << "Зарплата: " << salary << std::endl;
        std::cout << "Отдел: " << department << std::endl;
    }
};

int main() {
    Last obj;
    obj.setSurname("Иванов");
    obj.setSalary(50000);
    obj.setDepartment(101);
    obj.display();

    return 0;
}
