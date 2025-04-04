#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("%a is leap-year",a);
	}
		else if(a%100==0){
			printf("\n%d is not a leap-year",a);
		}
	else if(a%4==0){
		printf("\n%d is a leap year",a);
	}
	else{
		printf("%a is not a leapyear",a);
	}
	return 0;
}