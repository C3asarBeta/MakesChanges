#include <stdio.h>

int main()
{
	int userInput, i, result;
	puts("Enter a number in order to get a multuplication table: ");
	scanf("%d", &userInput);
	for (i=1; i<=10; i++) {
		result = userInput * i;
		printf("==> %d * %d  = %d\n", userInput, i, result);
	}
	return 0;
}