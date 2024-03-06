#include <iostream>

int main() {
	int g[2];
    int q,w;
    q=5;
    w=10;

    for (int i=0;i<2;i++) {
        g[i] = i<1?q:w;
    }

    for (int i=0; i<2; i++) {
        std::cout<<g[i]<<'\t';
    }
    std::cout<<std::endl<<"Работа программы завершена!";
}