#include<stdio.h>
int main(){
	int arr[10][10];
	int i,j;
	printf("Enter elements of Array: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
				
		}
	}
	printf("\nThe matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", arr[i][j]);	
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", arr[j][i]);	
		}
		printf("\n");
	}
	return 0;
}