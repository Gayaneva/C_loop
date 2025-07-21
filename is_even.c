#include <stdio.h>

int main() {
    int number = 0;
    int is_even = 0;

    printf("Enter an integer ");
    scanf("%d", &number);

    is_even = (number % 2 == 0);  

    if (is_even)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}

