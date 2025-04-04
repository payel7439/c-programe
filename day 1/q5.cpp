#include<stdio.h>
#include<conio.h>
int main(){
	int*a;
	(sizeof(a)==4)? printf("34 bit"):
	(sizeof(a)==8)? printf("64 bit"):
	printf("unknown");
	return 0; 
}