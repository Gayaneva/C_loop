#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 =0;
    printf("Enter two numbers ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("GCD is: %d\n", num1);
    return 0;
}

