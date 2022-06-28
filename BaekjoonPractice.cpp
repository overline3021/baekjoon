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
	int count = 0, Input_Count = 0, Input_Num = 0;

	scanf_s("%d", &Input_Count);

	for (int i = 0; i < Input_Count; i++) {
		scanf_s("%d", &Input_Num);

		if (Distinguish_Prime_Num(Input_Num) == 0) count++;
	}

	printf("%d", count);

	return 0;
}