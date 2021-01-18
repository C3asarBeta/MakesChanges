#include <stdio.h>
#include "fonction.h"

int howOld() {
	int byear, bmonth, bday, y, m, d;
	int cyear, cmonth, cday;
	puts("Enter your birthday date year/month/day: ");
	scanf("%d/%d/%d", &byear, &bmonth, &bday);
	puts("Enter Current date year/month/day: ");
	scanf("%d/%d/%d", &cyear, &cmonth, &cday);
	y = cyear - byear;
	m = cmonth - bmonth;
	d = cday - bday;
	printf("Your age is : %d years, %d months and %d days.\n", y, m, d);
	return(1);
}

int multiplicationTable(int start, int end) {
	int i;
	for (i=0; i<=10; i++) {
		printf("==> %d * %d = %d", start, i, (start * i));
		printf(" || %d * %d = %d\n", end, i, (end * i));
	}
	return (1);
}
