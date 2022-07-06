#include<stdio.h>

int main() {
    int n = 0, result = 1;

    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) result *= i;

    printf("%d", result);

    return 0;
}