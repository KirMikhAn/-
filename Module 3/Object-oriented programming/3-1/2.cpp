#include <iostream>
#include <cstring>
using namespace std;
struct New {
    string first;
    string second;
    string last;
};

int main() {
New go;
go.first = "one";
go.second = "two";
go.last = "three";
cout<<go.first<<'\t'<<go.second<<'\t'<<go.last;
}
