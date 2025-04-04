#include<stdio.h>
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
int e=(n/2)*2;
if(e==n){
printf("the number is even");
}
else{
printf("the number is odd");}
return 0;
}