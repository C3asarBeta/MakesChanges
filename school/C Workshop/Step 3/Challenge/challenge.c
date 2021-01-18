#include <stdio.h>

int add() {
	int a, b;
	puts("Enter two numbers :");
	scanf("%d %d", &a, &b);
	return a + b;

}

int swipe() {

}

int bool_isPremier()
{

}

int devidedby(int a, int b) {

}




int main()
{	char choice[2];
	puts("Choose from the above:\n1. Add two numbers\n2. Swipe values\n3.Bool is Premier\n4.Division of two values");
	scanf("%1s", choice);
	if (choice[0] == 0) {
		add();
	}


	return 0;

}