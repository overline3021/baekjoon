#include<stdio.h>

int main() {
    int n = 0, tmp = 0, Fibonacci[21];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (int i = 2; i <= 20; i++) {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    }

    scanf_s("%d", &n);

    printf("%d", Fibonacci[n]);

    return 0;
}