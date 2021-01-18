#include <stdio.h>

void printStar(int n) {
	int i, start = 1;

	for (i=0; i<n; i++) {
		printf("%d\n", start);
		start += 2;
	}
	printf("\n");
}

void printSpace(int n) {
	int i, start = n-1;

	for (i=n ; i>0; i--) {
		printf("%d\n", start);
		start -= 1;
	}
	printf("\n");

}

int main()
{	
	int n;
	puts("Enter a number: ");
	scanf("%d", &n);
	printf("\n");
	printStar(n), printSpace(n);
	return 0;
}