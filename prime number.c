#include <stdio.h>

int main() {
	int n = 32;
	int i = 2;

	while (i <= n) {
		int j = 2, isPrime = 1;

		while (j <= i / 2) {
			if (i % j == 0) {
				isPrime = 0;
			}
			j++;
		}

		if (isPrime == 1) {
			printf("%d ", i);
		}

		i++;
	}

	return 0;
}