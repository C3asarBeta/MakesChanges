#include <stdio.h>

int main()
{
	int user_input, count;
	float main_, total;
	count = 0;
	total = 0;
	while (1){
		puts("Entez un entier positif: ");
		scanf("%d", &user_input);
		if (user_input < 0) {
			break;
		} else if (user_input > 0) {
			total += user_input;
			count++;
		}

	}
	main_ = total / count;
	printf("La moyenne de ces %d entiers vaut %f\n", count, main_);

	return 0;
}