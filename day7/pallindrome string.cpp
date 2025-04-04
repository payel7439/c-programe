#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) {
    char str1[80], str2[80];

    printf("Enter the String: ");
    scanf("%s", str1);

    
    strcpy(str2, str1);

    
    strrev(str1);

    if (strcmp(str1, str2) == 0) {
        printf("The String is Palindrome");
    } else {
        printf("The String is not Palindrome");
    }

    getch();
    return 0;
}
