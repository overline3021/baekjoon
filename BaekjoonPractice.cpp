#include<stdio.h>
#include<math.h>

int Count_Prime_Num_Until_Double(int n, int web[]) {
	int count = 0;

	for (int i = n + 1; i <= 2 * n; i++) if (web[i] == 0) count++;

	return count;
}

int main() {
	int Input_N = 1, Eratosthenes[246913] = { 0, };

	Eratosthenes[1] = 1;

	for (int i = 2; i <= sqrt(246912); i++) {
		for (int j = 2; j * i <= 246912; j++) Eratosthenes[i * j] = 1;
	}

	while (Input_N != 0) {
		scanf_s("%d", &Input_N);

		if (Input_N == 0) return 0;

		printf("%d\n", Count_Prime_Num_Until_Double(Input_N, Eratosthenes));
	}

	return 0;
}