#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char Num[]) {
    char tmp[10001];
    int count = 0;

    count = strlen(Num) - 1;

    for (int i = 0; count >= 0; i++) {
        tmp[i] = Num[count];
        count--;
    }

    tmp[strlen(Num)] = '\0';

    strcpy_s(Num, 10001, tmp);
}

void sum(char a[], char b[], char result[]) {
    int count = 0, Count_A = 0, Count_B = 0;

    Count_A = strlen(a);
    Count_B = strlen(b);

    result[0] = '0';

    if (Count_A > Count_B) count = Count_B;
    else count = Count_A;

    for (int i = 0; i < count; i++) {
        if (a[i] + b[i] + result[i] - 48 * 3 >= 10) result[i + 1] = '1';
        else result[i + 1] = '0';

        result[i] = (result[i] + a[i] + b[i] - 48 * 3) % 10 + 48;
    }

    if (Count_A > Count_B) {
        for (int i = Count_B; i < Count_A; i++) {
            if (a[i] + result[i] - 48 * 2 >= 10) result[i + 1] = '1';
            else result[i + 1] = '0';

            result[i] = (result[i] + a[i] - 48 * 2) % 10 + 48;
        }
        if (result[Count_A] == '1') result[Count_A + 1] = '\0';
        else result[Count_A] = '\0';
    }
    else if (Count_A < Count_B) {
        for (int i = Count_A; i < Count_B; i++) {
            if (b[i] + result[i] - 48 * 2 >= 10) result[i + 1] = '1';
            else result[i + 1] = '0';

            result[i] = (result[i] + b[i] - 48 * 2) % 10 + 48;
        }
        if (result[Count_B] == '1') result[Count_B + 1] = '\0';
        else result[Count_B] = '\0';
    }
    else {
        if (result[count] == '1') result[count + 1] = '\0';
        else result[count] = '\0';
    }
}

int main() {
    char *Large_Num_A, *Large_Num_B, *result;

    Large_Num_A = (char*)malloc(sizeof(char) * 10001);
    Large_Num_B = (char*)malloc(sizeof(char) * 10001);
    result = (char*)malloc(sizeof(char) * 10002);

    if (Large_Num_A == NULL || Large_Num_B == NULL || result == NULL) goto move;

    scanf_s("%s %s", Large_Num_A, 10000, Large_Num_B, 10000);

    reverse(Large_Num_A);
    reverse(Large_Num_B);

    printf("%s\n", Large_Num_A);
    printf("%s\n", Large_Num_B);

    sum(Large_Num_A, Large_Num_B, result);

    reverse(result);

    for (int i = 0; i < strlen(result); i++) printf("%d", result[i] - 48);

move:
    free(Large_Num_A);
    free(Large_Num_B);
    free(result);

    return 0;
}