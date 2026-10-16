#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *source;
    FILE *destination;

    char sourceFile[100];
    char destinationFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Error: Cannot open source file %s\n", sourceFile);
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL)
    {
        printf("Error: Cannot open destination file %s\n", destinationFile);
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("\nFile copied successfully.\n");

 
    return 0;
}