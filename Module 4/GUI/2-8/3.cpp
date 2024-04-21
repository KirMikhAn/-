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

    std::string getName() const {
        return name;
    }

    std::string getSurname() const {
        return surname;
    }
};

int main() {
    New obj;
    obj.setName("Иван");
    obj.setSurname("Иванов");
    std::cout << "Имя: " << obj.getName() << "\n";
    std::cout << "Фамилия: " << obj.getSurname() << "\n";

    return 0;
}
