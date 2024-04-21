#include <iostream>

int main() {
    char z[] = {'2', '3', '0', '1'};
    int size = sizeof(z) / sizeof(z[0]);

    for(int i = 0; i < size; i++) {
        std::cout<<(z[i])<<'\n';
    }

    return 0;
}
