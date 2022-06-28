#include<stdio.h>
#include<math.h>

void Factorization(int num) {
	int tmp = 0, i = 2;

	for (i; i <= num; i++) {
		if (num % i == 0) {
			printf("%d\n", i);
			num /= i;
			i--;
		}
	}
}

int main() {
	int Input_Num = 0;

	scanf_s("%d", &Input_Num);

	if (Input_Num == 1) return 0;
	
	Factorization(Input_Num);

	return 0;
}