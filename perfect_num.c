#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d isnot a perfect number.\n", num);

    return 0;
}

