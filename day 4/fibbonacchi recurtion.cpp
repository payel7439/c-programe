#include <stdio.h>
int fibonacci(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else{
	
        int a=fibonacci(n - 1) + fibonacci(n - 2);
        return a;
    }
}
int main()
 {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    if (num <= 0) 
	{
        printf("Please enter a positive number.\n");
    } else 
	{
        printf("Fibonacci Series: ");
        for (int i = 0; i < num; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    
    return 0;
}