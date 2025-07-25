#include <stdio.h>

int main() {
    int num = 0;
    int max = -1;

    printf("Enter numbers \n");

    while (1) {
        scanf("%d", &num);
        if (num == -1)
            break;
        if (num > max)
            max = num;
    }

    printf("Max number is %d\n", max);

    return 0;
}

