#include <stdio.h>

int main(void)
{
    int age;
    float height;
    char grade;
    char name[50];

    /* Input operations */
    printf("Enter your name: ");
    scanf(" %49[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);

    /* Output operations */
    printf("\n--- User Details ---\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Height : %.2f meters\n", height);
    printf("Grade  : %c\n", grade);

    return 0;
}