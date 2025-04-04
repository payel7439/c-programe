#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    for (int temp = number; temp != 0; ++n) {
        temp /= 10;
    }

    for (int temp = number; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if ((int)result == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
