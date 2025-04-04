#include<stdio.h>
int main(){
int a,b;
printf("enter the number for a:");
scanf("%d",&a);
printf("enter the number for b:");
scanf("%d",&b);
a=a^b,b=a^b,a=a^b;
printf("After swapping the value of a= %d",a);
printf("\nAfter swapping the value of b= %d",b);
return 0;
}