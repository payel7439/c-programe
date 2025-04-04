#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (; number != 0; number /= 10) {
        count++;
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
