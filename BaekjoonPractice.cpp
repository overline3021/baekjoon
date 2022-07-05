#include<stdio.h>
#include<math.h>

int Divide_Prime_Num(int n, int web[]) {
	int min = 0;

	for (min = n / 2; web[min] != 0 || web[n - min] != 0; min--);

	return min;
}

int main() {
	int Test_Case = 0, Input_Even_Num = 0, tmp = 0, Eratosthenes[10001] = { 0, };

	Eratosthenes[1] = 1;

	for (int i = 2; i <= sqrt(10000); i++) {
		for (int j = 2; j * i <= 10000; j++) Eratosthenes[i * j] = 1;
	}

	scanf_s("%d", &Test_Case);

	for (int i = 0; i < Test_Case; i++) {
		scanf_s("%d", &Input_Even_Num);

		tmp = Divide_Prime_Num(Input_Even_Num, Eratosthenes);

		printf("%d %d\n", tmp, Input_Even_Num - tmp);
	}

	return 0;
}