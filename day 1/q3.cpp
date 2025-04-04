#include<stdio.h>
int main(){
int a=10,b=20,c=30;
printf("largest number is :%d\n",(a>b)?(a>c?a:c):(b>c?b:c));
return 0;
}