#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping (Call by Value): a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (Call by Value): a = %d, b = %d\n", a, b);

    
    printf("\nRe-enter two numbers for Call by Reference swapping: ");
    scanf("%d %d", &a, &b);

   
    printf("\nBefore swapping (Call by Reference): a = %d, b = %d\n", a, b);
    int *p1 = &a, *p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping (Call by Reference): a = %d, b = %d\n", a, b);

    return 0;
}