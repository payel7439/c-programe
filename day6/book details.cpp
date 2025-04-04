#include<stdio.h>
struct details
{
char name[100];
int ISBN_No;
float price; 
};
struct details b[5];
int main ()
{
	printf("Don't use 'space', use '_' for space.\n");
	for (int i = 0; i < 5; i++){
		printf("Enter the Book name and Author:");
		scanf("%s", &b[i].name);
		printf("Enter the ISBN. No of the book:");
		scanf("%d", &b[i].ISBN_No);	
		printf("Enter the Price of the book:");
		scanf("%f", &b[i].price);	
	}
	printf("\nDisplaying the Details of the book");
	
	for (int i = 0; i < 5; i++){
		printf("\n\nThe name of the Book & Author: %s", b[i].name);
		printf("\n\nThe ISBN. No. of the book: %d",b[i].ISBN_No);
		printf("\n\nThe Price of the book is: %0.2f",b[i].price);
	}
		return 0;
	
}