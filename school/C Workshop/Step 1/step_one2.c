/*
 * Use diff operator to calculate a & b  
 */

#include <stdio.h>

int main()
{
	float a, b;
	puts("Enter two values a & b and let's calculate them: ");
	scanf("%f %f", &a, &b);
	printf("a + b: %f\na - b: %f\na * b: %f\na / b: %f\na %% b: %d\n", a+b, a-b, a*b, a/b, (int)a%(int)b);
	/*Look for Why we can't do computation on float numbers using mod*/

	return 0;

}