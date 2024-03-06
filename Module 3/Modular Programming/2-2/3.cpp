#include <iostream>

int main() {
	int x[3];
    int a,b,c;
    a = 5;
    b = 10;
    c = 15;

    for (int i=0;i<3;i++) {
        x[i] = i<1?a:i<2?b:c;
    }

    for (int i=0; i<3; i++) {
        std::cout<<x[i]<<'\t';
    }
}