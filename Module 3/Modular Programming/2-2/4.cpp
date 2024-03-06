#include <iostream>

int main() {
	int b[2];
    int q,w;
    q=5;
    w=10;

    for (int i=0;i<2;i++) {
        b[i] = i<1?q:w;
    }

    for (int i=0; i<2; i++) {
        std::cout<<b[i]<<'\t';
    }
}