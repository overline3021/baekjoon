#include<stdio.h>
#include<math.h>

void Distinguish_Prime_Num(int num_m, int num_n, int tmp_array[]) {
	for (int i = 2; i <= num_n; i++) {
		for (int j = 2; j * i <= num_n; j++) tmp_array[j * i] = 1;
	}
}

int main() {
	int Input_N = 0, Input_M = 0, Eratosthenes[1000001] = { 0, };

	Eratosthenes[1] = 1;

	scanf_s("%d %d", &Input_M, &Input_N);

	Distinguish_Prime_Num(Input_M, Input_N, Eratosthenes);

	for (int i = Input_M; i <= Input_N; i++) if (Eratosthenes[i] == 0) printf("%d\n", i);

	return 0;
}