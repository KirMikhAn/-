#include <iostream>
#include <fstream>
#include <string>

class CFile {
public:
    void createAndWrite(std::string filename, std::string content) {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << content;
            file.close();   
        } else {
            std::cout << "Не удалось открыть файл" << std::endl;
        }
    }
};

int main() {
    CFile file;
    file.createAndWrite("example.txt", "Hello, World!");

    return 0;
}
