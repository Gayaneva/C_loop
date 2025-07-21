#include <stdio.h>

int main() {
    int number = 0;
    int is_positive_and_even = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    is_positive_and_even = (number > 0) && (number % 2 == 0);

    if (is_positive_and_even)
        printf("The number is positive and even.\n");
    else
        printf("The number isn't positive and even.\n");

   
}

