#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 4 && digit != 7) {
            printf("%d is not a lucky number.\n", num);
            return 0;  
        }
        temp /= 10;
    }

    printf("%d is a lucky number.\n", num);
    return 0;
}

