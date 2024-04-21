#include <iostream>
#include <string>

class Third {
private:
    std::string surname;
    unsigned salary;
    unsigned work_in_years;

public:
    void setSurname(const std::string& s) {
        surname = s;
    }

    void setSalary(unsigned s) {
        salary = s;
    }

    void setWorkInYears(unsigned w) {
        work_in_years = w;
    }

    void display() {
        std::cout << "Фамилия: " << surname << std::endl;
        std::cout << "Зарплата: " << salary << std::endl;
        std::cout << "Стаж работы: " << work_in_years << " год(а)" << std::endl;
    }
};

int main() {
    Third obj;
    obj.setSurname("Иванов");
    obj.setSalary(50000);
    obj.setWorkInYears(5);
    obj.display();

    return 0;
}
