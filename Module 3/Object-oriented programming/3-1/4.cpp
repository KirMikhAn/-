#include <iostream>
#include <cstring>
using namespace std;
struct First {
    int a;
    int s;
};

int main() {
First go;
go.a = 5;
go.s = 10;
go.a *= 3;
go.s *= 3;
cout<<go.a<<'\t'<<go.s;
}
