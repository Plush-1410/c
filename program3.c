#include <stdio.h>

int main(void)
{
    int n, i;
    int evenSum = 0;
    int oddSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
    }

    printf("Sum of Even Numbers = %d\n", evenSum);
    printf("Sum of Odd Numbers = %d\n", oddSum);

    return 0;
}