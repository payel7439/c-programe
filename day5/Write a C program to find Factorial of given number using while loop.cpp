#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int i = number;

    while (i > 0) {
        factorial *= i;
        i--;
    }

    printf("Factorial of %d is %d\n", number, factorial);
    return 0;
}
