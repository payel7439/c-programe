#include<stdio.h>

int main()
{
	int i, ec;
	printf("Enter how many element you want to give: ");
	scanf("%d", &ec);
	int arr[ec];
	printf("Enter elements in array (please press enter after entering numbers): ");
	for(i=0;i<ec;i++){
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for(i=0;i<ec;i++)
	{
		if (arr[i]<min)
		min = arr[i];
		if (arr[i]>max)
		max = arr[i];
	}
	printf("smallest element present in the array %d\n", min);
	printf("largest element present in the array %d", max);
	return 0;
}