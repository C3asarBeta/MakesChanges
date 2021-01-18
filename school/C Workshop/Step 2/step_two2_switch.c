#include <stdio.h>

int main()
{
	float a=0, b=0, result=0;
	char operator[2];

	puts("Enter two values you're welling to compute (e.g 15 2): ");
	scanf("%f %f", &a, &b);
	puts("Enter the operator (e.g +, -, *, /, ..): ");
	scanf("%1s", operator);	

	switch(operator[0]) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b == 0){
				printf("Division by zero is undefined.")
			} else {
				result = a / b;
			}
			break;
		case '%':
			result = (int)a % (int)b;
			break;
	}
	printf("the final result is: %.2f\n", result);

	return 0;
}