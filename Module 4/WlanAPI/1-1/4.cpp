#include <iostream>
#include <cstring>

struct First {
    int a;
    int s;
};

int main() {
    First A;
    A.a = 5;
    A.s = 10;
    std::cout<<A.a*3<<'\t'<<A.s*3; 
}