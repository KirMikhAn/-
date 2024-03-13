#include <iostream>
#include <cstring>
using namespace std;
struct First {
    int a;
    int b;
};

int main() {
First go;
go.a = 5;
go.b = 10;
go.a *= 2;
go.b *= 2;
cout<<go.a<<'\t'<<go.b;
}
