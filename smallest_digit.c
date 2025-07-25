#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int smallest = 9;  

    if (num == 0) {
        smallest = 0;  
    } else {
        while (num > 0) {
            int digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            num /= 10;
        }
    }

    printf("Smallest digit is  %d\n", smallest);
    return 0;
}

