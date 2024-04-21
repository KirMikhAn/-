#include <cstdio>
//принтф удобнее каута. change my mind.
int main() {
    char q[3] = {'a', 'b', 'c'};
    int i;

    printf("До изменения: ");
    for(i = 0; i < 3; i++) {
        printf("%c ", q[i]);
    }

    q[2] = '1';

    printf("\nПосле изменения: ");
    for(i = 0; i < 3; i++) {
        printf("%c ", q[i]);
    }
}
