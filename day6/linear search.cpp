#include<stdio.h>
int main(){
	int arr[100],n, i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int num=21;  
	
	for(i=0;i<n;i++){
	
		if(arr[i] == num){
			
			break;
		}
	}
	if(i<n)
	{
		printf("Element is found");
	}
	else
	{
		printf("Element is not found");
	}
	return 0;
}