#include<stdio.h>
int main(){
int a=3,b=5;
a^=b^=a^=b;
printf("a=%d b=%d",a,b);
return 0;
}