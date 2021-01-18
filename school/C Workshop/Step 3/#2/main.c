#include <stdio.h>
#include "fonction.h"

int main()
{	
	char choice[2];
	int a, b;
	puts("Choose from the above:\n1. Get your birth calculation\n2. Get two number's multiplication table");
	scanf("%1s", choice);
	if (choice[0] == '1') {
		howOld();
	} else if (choice[0] == '2') {
		puts("Enter Two numbers (e.g 6 8): ");
		scanf("%d %d", &a, &b);
		multiplicationTable(a, b);
	}
	return 0;
}