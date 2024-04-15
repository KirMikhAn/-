#include <iostream>
#include <string>

int sum(int y, int x) {
    int s = 0;
    if((y-1)== x) s=y+x;
    else s=y+sum(y-1, x);
    return s;
};

int main() {
int a;
int b;
std::cin>>a>>b;
std::cout<<sum(a,b);
}
