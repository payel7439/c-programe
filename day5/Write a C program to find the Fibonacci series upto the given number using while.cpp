#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    printf("Enter the limit number: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d: ", limit);

    if (limit >= first) {
        printf("%d ", first);
    }

    if (limit >= second) {
        printf("%d ", second);
    }

    next = first + second;
    while (next <= limit) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");
    return 0;
}
