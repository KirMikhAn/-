#include <iostream>
#include <string>

class Last {
private:
    std::string surname;
    unsigned salary;    
    unsigned department;

public:
    void setSurname(std::string s) { surname = s; }
    void setSalary(unsigned s) { salary = s; }
    void setDepartment(unsigned d) { department = d; }

    std::string getSurname() { return surname; }
    unsigned getSalary() { return salary; }
    unsigned getDepartment() { return department; }
};

int main() {
    Last l;

    l.setSurname("Иванов");
    l.setSalary(50000);
    l.setDepartment(101);
    
    std::cout << "Фамилия: " << l.getSurname() << std::endl;
    std::cout << "Зарплата: " << l.getSalary() << std::endl;
    std::cout << "Отдел: " << l.getDepartment() << std::endl;

    return 0;
}
