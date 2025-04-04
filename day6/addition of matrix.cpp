#include<stdio.h>
int main(){
	int arr1[10][10],arr2[10][10],arr3[10][10];
	int i,j;
	printf("Enter elements of 1st Array: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
				
		}
	}
	printf("\nThe matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", arr1[i][j]);	
		}
		printf("\n");
	}
	printf("Enter elements of 2nd Array: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\nThe matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("\n");
	printf("The result:\n");
	//The result
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}