#include<stdio.h>

int main() {
    int n = 0, count = 0, six_tmp = 0, result = 0;

    scanf_s("%d", &n);

    for (result = 0; count != n; result++) {
        six_tmp = 0;

        for (int j = result; j / 100 != 0; j /= 10) {
            if (j % 1000 == 666) six_tmp = 1;
        }

        if (six_tmp == 1) count++;
    }

    printf("%d", result - 1);

    return 0;
}