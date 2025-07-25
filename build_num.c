#include <stdio.h>

int main() {
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;

        printf("Enter 3 digits ");
        scanf("%d %d %d", &digit1, &digit2, &digit3);

  
        int number = digit1 * 100 + digit2 * 10 + digit3;

        printf("Number is  %d\n", number);

    return 0;
}

