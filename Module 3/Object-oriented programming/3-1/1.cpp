#include <iostream>
using namespace std;
struct New {
    int first;
    char second;
};

int main() {
New go;
go.first = 5;
go.second = 42;
cout<<go.first<<'\t'<<go.second;
}
