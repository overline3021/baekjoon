#include<stdio.h>
#include<math.h>

void Print_Star(int n, int row, int count, int three_count) {
    int column = 1, tmp = 0, tmp_column = 0, tmp_row = 0, min = 0, MAX = 0;

    if (three_count == 1) {
        for (int k = 0; k < pow(3, three_count); k++) {
            for (int i = 0; i < n; i++) {
                tmp = 0;

                for (int j = 1; j <= count; j++) {
                    tmp_column = column % 3;

                    if (tmp_column == 2 && row == 2) tmp = 1;
                }

                if (tmp == 1) printf(" ");
                else printf("*");

                column++;
            }
            printf("\n");
            row++;
        }
    }
    else {
        for (int k = pow(3, three_count - 1); k < pow(3, three_count); k++) {
            for (int i = 0; i < n; i++) {
                tmp = 0;

                for (int j = 1; j <= count; j++) {
                    tmp_column = column % (int)pow(3, j);
                    tmp_row = row % (int)pow(3, j);
                    min = pow(3, j - 1);
                    MAX = pow(3, j) - pow(3, j - 1);

                    if (tmp_column > min && tmp_column <= MAX && tmp_row > min && tmp_row <= MAX) tmp = 1;
                }

                if (tmp == 1) printf(" ");
                else printf("*");

                column++;
            }
            printf("\n");
            row++;
        }
    }

    if (row < n) {
        three_count++;
        Print_Star(n, row, count, three_count);
    }
}

int main() {
    int n = 0, row = 1, count = 0, tmp_n, three_count = 1;

    scanf_s("%d", &n);

    tmp_n = n;

    while (tmp_n != 1) {
        count++;
        tmp_n /= 3;
    }

    Print_Star(n, row, count, three_count);

    return 0;
}