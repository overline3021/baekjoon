#include<stdio.h>
#include<string.h>

void reverse(char Num[]) {
    char tmp[10001];
    int count = 0;

    count = strlen(Num) - 1;

    for (int i = 0; count >= 0; i++) {
        tmp[i] = Num[count];
        count--;
    }

    tmp[strlen(Num) + 1] = '\0';

    strcpy_s(Num, 10001, tmp);
}

void sum(char a[], char b[], char result[]) {
    int count = 0, Count_A = 0, Count_B = 0, tmp = 0;

    Count_A = strlen(a);
    Count_B = strlen(b);

    if (Count_A > Count_B) count = Count_B;
    else count = Count_A;

    for (int i = 0; i < count; i++) {
        if ((int)a[i] + (int)b[i] + (int)result[i] >= 10) result[i + 1] = 1;

        result[i] = ((int)result[i] + (int)a[i] + (int)b[i]) % 10;
    }

    if (Count_A > Count_B) {
        for (int i = Count_B + 1; i < Count_A; i++) {
            if ((int)a[i] + (int)result[i] >= 10) result[i + 1] = 1;

            result[i] = ((int)result[i] + (int)a[i]) % 10;
        }
        result[Count_A + 1] = '\0';
    }
    else {
        for (int i = Count_A + 1; i < Count_B; i++) {
            if ((int)b[i] + (int)result[i] >= 10) result[i + 1] = 1;

            result[i] = ((int)result[i] + (int)b[i]) % 10;
        }
        result[Count_B + 1] = '\0';
    }
}

int main() {
    char Large_Num_A[10001], Large_Num_B[10001], result[10002];

    scanf_s("%[^' '] %[^\n]", &Large_Num_A, 10000, &Large_Num_B, 10000);

    reverse(Large_Num_A);
    reverse(Large_Num_B);

    sum(Large_Num_A, Large_Num_B, result);

    reverse(result);

    for (int i = 0; i < strlen(result); i++) printf("%d", (int)result[i]);

    return 0;
}