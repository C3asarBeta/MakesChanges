#include <stdio.h>



int main()
{
	int a, b, gcd;
	puts("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	while (1) {
		if (a == 0 || b == 0) {
			break;
		} else if (a < b) {
			b -= a;
			// printf("B equal to: %d || ", b);
		} else if (a >= b) {
			a -= b;
			// printf("A equal to: %d\n", a);
		}
	}
	// printf("Final result: a = %d, b = %d\n", a, b);
	if (a != 0) {
		gcd = a;
	} else if (b != 0) {
		gcd = b;
	}
	printf("The Greatest Common Divisor is: %d\n", gcd);
	return 0;
}