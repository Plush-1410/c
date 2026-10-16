#include <stdio.h>

int main(void)
{
    int arr[100], n, i;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Traverse and display array elements
    printf("Array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}