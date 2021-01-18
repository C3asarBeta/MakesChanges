/*
 *First program main to take some infos and give them back 
*/
#include <stdio.h>

int main()
{
	char fname[16];
	puts("Enter your first name: ");
	scanf("%15s", fname);

	char lname[16];
	puts("Enter your last name: ");
	scanf("%15s", lname);

	char gender[2];
	puts("Enter your Gender, M or F: ");
	scanf("%1s", gender);

	int age;
	char phone_number[11];
	puts("Enter your age: ");
	scanf("%d", &age);

	if (age >= 18){			
		puts("Please enter your phone number: ");
		scanf("%10s", phone_number);
		if (gender[0] == 'M') {
			printf("Thank you M. %s %s for your submition,\nwe will contact you via your number phone %s.\n", fname, lname, phone_number);
		} else if (gender[0] == 'F') {
			printf("Thank you Ms. %s %s for your submition,\nwe will contact you via your number phone %s.\n", fname, lname, phone_number);
		}
	} else if (age < 18) {
		puts("Please enter your parents phone number: ");
		scanf("%10s", phone_number);
		printf("Thank you %s %s for your submition,\nwe will contact your parents via their number phone %s.\n", fname, lname, phone_number);

	}

	return 0;
}