#include <iostream>
#include <cstring>
using namespace std;
struct First {
    int q;
    int w;
    int e;
};

int main() {
First go;
go.q = 5;
go.w = 10;
go.e = 15;
go.q *= 4;
go.w *= 4;
go.e *= 4;
cout<<go.q<<'\t'<<go.w<<'\t'<<go.e;
}
