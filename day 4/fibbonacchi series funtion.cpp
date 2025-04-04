#include <stdio.h>
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        fibonacci(num);
    }
    
    return 0;
} 