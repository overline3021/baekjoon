#include<stdio.h>

void Print_Star(int row, int column, int n) {
    if ((row / n) % 3 == 1 && (column / n) % 3 == 1) printf(" ");
    else if (n / 3 == 0) printf("*");
    else Print_Star(row, column, n / 3);
}

int main() {
    int n = 0, row = 0, column = 0;

    scanf_s("%d", &n);

    for (row = 0; row < n; row++) {
        for (column = 0; column < n; column++) {
            Print_Star(row, column, n);
        }
        printf("\n");
    }

    return 0;
}