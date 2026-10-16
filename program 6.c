#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    char a[15], b[15];

    
    printf("Enter a string: ");
    scanf("%14s", a);

    strcpy(b, a);
    strrev(b);

    if (strcmp(a, b) == 0)
    {
        printf("\nThe given string is a palindrome");
    }
    else
    {
        printf("\nThe given string is not a palindrome");
    }

    

    return 0;
}