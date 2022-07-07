#include<stdio.h>

int main() {
    int n = 0, m = 0, num[101], result = 0;

    scanf_s("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &num[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (num[i] + num[j] + num[k] > result && num[i] + num[j] + num[k] <= m) result = num[i] + num[j] + num[k];
            }
        }
    }

    printf("%d", result);

    return 0;
}