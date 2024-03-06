#include <iostream>

int main() {
    int c[3];
    int q,w,e;
    q = 5;
    w = 10;
    e = 15;

    for (int i=0; i<3; i++) {
        c[i] = i==0?q:i==1?w:e;
    }

    for (int i=0; i<3; i++) {
        std::cout<<c[i]<<'\t';
    }
}