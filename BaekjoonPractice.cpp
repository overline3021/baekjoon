#include<stdio.h>

void recursion(int n, int count, int tmp) {
    if (tmp == 0) {
        for (int k = 0; k < count; k++) printf("____");
        printf("\"����Լ��� ������?\"\n");
        for (int k = 0; k < count; k++) printf("____");
        printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
        for (int k = 0; k < count; k++) printf("____");
        printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
        for (int k = 0; k < count; k++) printf("____");
        printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");

        count++;
        if (count == n) tmp = 1;
        recursion(n, count, tmp);
    }
    else if (tmp == 1 && count == n) {
        for (int p = 0; p < count; p++) printf("____");
        printf("\"����Լ��� ������?\"\n");
        for (int p = 0; p < count; p++) printf("____");
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
        for (int p = 0; p < count; p++) printf("____");
        printf("��� �亯�Ͽ���.\n");
        count--;
        recursion(n, count, tmp);
    }
    else if (tmp == 1 && count >= 0) {
        for (int m = 0; m < count; m++) printf("____");
        printf("��� �亯�Ͽ���.\n");
        count--;
        recursion(n, count, tmp);
    }
}

int main() {
    int n = 0, count = 0, tmp = 0;

    scanf_s("%d", &n);

    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");

    recursion(n, count, tmp);

    return 0;
}