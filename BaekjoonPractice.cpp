#include<stdio.h>
#include<math.h>

int Distinguish_Prime_Num(int num) {
	int tmp = 0;

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) tmp++;
	}

	if (num > 1 && tmp == 0) return 0;
	else return 1;
}

int main() {
	int count = 0, Input_M = 0, Input_N = 0, min = 10000;

	scanf_s("%d", &Input_M);
	scanf_s("%d", &Input_N);

	for (int i = Input_M; i <= Input_N; i++) {
		if (Distinguish_Prime_Num(i) == 0) {
			count += i;

			if (min > i) min = i;
		}
	}

	if (count == 0) printf("-1");
	else {
		printf("%d\n", count);
		printf("%d", min);
	}

	return 0;
}