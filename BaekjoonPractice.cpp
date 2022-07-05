#include<stdio.h>
#include<string.h>

void reverse(char Num[]) {
    char tmp;
    int count = strlen(Num);

    for (int i = 0; i < count / 2; i++) {
        tmp = Num[i];
        Num[i] = Num[count - i - 1];
        Num[count - i - 1] = tmp;
    }
}

void sum(char a[], char b[], char result[]) {
    int Count_A = 0, Count_B = 0;

    Count_A = strlen(a);
    Count_B = strlen(b);

    result[0] = '0';

    if (Count_A > Count_B) {
        for (int i = 0; i < Count_B; i++) {
            if (a[i] + b[i] + result[i] - '0' * 3 >= 10) result[i + 1] = '1';
            else result[i + 1] = '0';

            result[i] = (result[i] + a[i] + b[i] - '0' * 3) % 10 + '0';
        }

        for (int i = Count_B; i < Count_A; i++) {
            if (a[i] + result[i] - '0' * 2 >= 10) result[i + 1] = '1';
            else result[i + 1] = '0';

            result[i] = (result[i] + a[i] - '0' * 2) % 10 + '0';
        }
        if (result[Count_A] == '1') result[Count_A + 1] = '\0';
        else result[Count_A] = '\0';
    }
    else {
        for (int i = 0; i < Count_A; i++) {
            if (a[i] + b[i] + result[i] - '0' * 3 >= 10) result[i + 1] = '1';
            else result[i + 1] = '0';

            result[i] = (result[i] + a[i] + b[i] - '0' * 3) % 10 + '0';
        }

        for (int i = Count_A; i < Count_B; i++) {
            if (b[i] + result[i] - '0' * 2 >= 10) result[i + 1] = '1';
            else result[i + 1] = '0';

            result[i] = (result[i] + b[i] - '0' * 2) % 10 + '0';
        }
        if (result[Count_B] == '1') result[Count_B + 1] = '\0';
        else result[Count_B] = '\0';
    }
}

int main() {
    char Large_Num_A[10001], Large_Num_B[10001], result[10002];

    scanf_s("%s %s", &Large_Num_A, 10000, &Large_Num_B, 10000);

    reverse(Large_Num_A);
    reverse(Large_Num_B);

    sum(Large_Num_A, Large_Num_B, result);

    reverse(result);

    for (int i = 0; i < strlen(result); i++) printf("%d", result[i] - '0');

    return 0;
}