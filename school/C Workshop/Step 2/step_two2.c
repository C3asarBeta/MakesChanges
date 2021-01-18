#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, result;
	int break_ = 0, choice = 0;
	char operation[2];

	while (choice != 3) {
		puts("Choose from the above:\n1. Make a computation\n2. Hexa's and octet's size\n3. Exit");
		scanf("%d", &choice);

		if (choice == 1) {
			puts("Enter number you're welling to compute (e.g 16 9): ");
			scanf("%f %f", &a, &b);
			puts("Put the Operator (e.g +, -, *, ..): ");
			scanf("%1s", operation);
			if (operation[0] == '+') {
				result = a + b;
			} else if (operation[0] == '-') {
				result = a - b;
			} else if (operation[0] == '*') {
				result = a * b;
			} else if (operation[0] == '/') {
				if (b != 0) {
					result = a / b;
				} else {
					puts("Division by Zero is Undefined.");
					break_ = 1;
				}
			} else if (operation[0] == '%') {
				result = (int)a % (int)b;
			}
			if (break_ == 0) {
				printf("The calculation result is: %.2f\n", result);
			}
		} else if (choice == 2) {
			int a, b;
			puts("Enter two numbers (e.g 55 93): ");
			scanf("%d %d", &a, &b);
			printf("The %d Octet : %o, Hexadecimal: %x\n", a, a, a);
			printf("The %d Octet : %o, Hexadecimal: %x\n", b, b, b);
		} else if (choice == 3) {
			puts("Goodbye!");
			break;
		}

	}
	return 0;
}
