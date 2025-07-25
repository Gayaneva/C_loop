#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0; 
	int i = 2;
   	 printf("Enter 2 numbers ");

         scanf("%d %d", &num1, &num2);

	 while (i <= num1 && i <= num2) {
         if (num1 % i == 0 && num2 % i == 0) {
            printf("First common divisor is  %d\n", i);
            return 0;
        }
        i++;
    }

    printf("No common divisor greater than 1.\n");
    return 0;
}

