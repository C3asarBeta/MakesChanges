#include <stdio.h>



int main()
{
	int a, b, result;
	puts("Enter two positive numbers: ");
	scanf("%d %d", &a, &b);
	while (1) {
		if (b % 2 != 0) {
			b -= 1;
			a *= 2;
			printf("result in odd: %d\n", result);
		} else if (b % 2 == 0) {
			b /= 2;
			result = (2 * a) * (b);
			printf("result in even: %d\n", result);
			if (b == 0) {
				break;
			}
		}
	}
	return 0;
}