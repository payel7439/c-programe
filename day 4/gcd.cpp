#include <stdio.h>
int gcd(int a, int b)
{
	if (b!=0)
	{
		return gcd(b,(a%b));
	}
	else {
		return a;
	}
}
int main()
{
	int n1,n2;
	printf("Enter two numbers to find out the Greatest Common Factorial : ");
	scanf("%d %d",&n1,&n2);
	int g=gcd(n1,n2);
	printf("The number would be : %d",g);
	return 0;
}