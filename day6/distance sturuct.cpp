#include <stdio.h>


struct Distance {
    int feet;
    int inches;
};




int main() {
    struct Distance d1, d2, result;

    
    printf("Enter the first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    
    printf("Enter the second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;

    if(result.inches > 11)
    {
    	result.inches = result.inches - 12;
    	result.feet++;
	}
    printf("Total distance: %d feet %d inches\n", result.feet, result.inches);

    return 0;
}
