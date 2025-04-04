#include<stdio.h>
#include<conio.h>
int main(){
	int a=400,b=500,c=300;
	if(a>b){
		if(a>c)
	{
		printf("a=%d is the biggest number",a);
	}
	else{
		printf("c=%d is the biggest",c);
	}}
	else if(b>c){
		printf("b=%d is the biggest",b);
	}else{
		printf("c=%d is biggest");
	}

	return 0;
}