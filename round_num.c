#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number ");
    scanf("%d", &num);

    int last_digit = num % 10;

    if (last_digit >= 5) {
        num = num + (10 - last_digit);
    } else {
        num = num - last_digit;    
    }

    printf("Rounded number is %d\n", num);
    return 0;
}

