#include <stdio.h>

int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    for (int temp = number; temp != 0; temp /= 10) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
