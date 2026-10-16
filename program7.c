#include <stdio.h>

int main(void)
{
    char bases[] = {'A', 'T', 'G', 'C'};
    char *p = bases;  // Pointer to bases array

    int i, j, k;
    int count = 0;

    printf("DNA Codon Table:\n\n");

    // Generate all codons using pointers
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("%c%c%c ", *(p + i), *(p + j), *(p + k));

                count++;

                // Print in table format (8 codons per row)
                if (count % 8 == 0)
                {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}