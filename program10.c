#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char filename[50];
    int ch;

    int countA = 0, countT = 0, countG = 0, countC = 0;

    // Input file name
    printf("Enter file name containing DNA sequence: ");
    scanf("%49s", filename);

    // Open file
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        switch (ch)
        {
            case 'A':
            case 'a':
                countA++;
                break;

            case 'T':
            case 't':
                countT++;
                break;

            case 'G':
            case 'g':
                countG++;
                break;

            case 'C':
            case 'c':
                countC++;
                break;
        }
    }

    // Close file
    fclose(fp);

    // Display results
    printf("\nNucleotide Counts:\n");
    printf("A : %d\n", countA);
    printf("T : %d\n", countT);
    printf("G : %d\n", countG);
    printf("C : %d\n", countC);

    return 0;
}