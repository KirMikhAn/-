#include <iostream>
#include <cstring>

int main() {
    std::string a = "Последняя";
    std::string b = "задача";
    std::string c = "решена!";
    char p = ' ';
    std::string res = a+p+b+p+c;
    std::cout<<res; 
}