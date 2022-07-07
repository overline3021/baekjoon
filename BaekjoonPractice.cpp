#include<stdio.h>

int main() {
    int n = 0, result = 1000000, tmp = 0, carry = 0;

    scanf_s("%d", &n);

    for (int i = 1; i < n; i++) {
        carry = 0;

        for (tmp = i; tmp % 10 != 0; tmp /= 10) {
            carry += tmp % 10;
        }

        if (i < result && carry + i == n) result = i;
    }

    if (result == 1000000) printf("0");
    else printf("%d", result);

    return 0;
}