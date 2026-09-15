#include <stdio.h>

int main() {
    int x[2][2];
    int a = 1;

    for (int i = 0; i <=1; i++) {
        for (int j = 0; j <i+1; j++) {
            x[i][j] = a++;
        }
    }

    for (int i = 0; i <2;i++) {
        for (int j = 0; j <=i+1; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
