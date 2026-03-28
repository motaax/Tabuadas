#include <stdio.h>

int main() {
    int i, j, res;

    for(j=1; j<=10; j++) {
        for(i=1; i<=10; i++) {
            res = j * j;
            printf("%d x %d = %d \n", j, i, res);
        }

        printf("\n");
    }

    return 0;
}