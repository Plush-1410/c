#include <stdio.h>
#include <conio.h>

void coimbatore(void);
void chennai(void);
void agra(void);

void main()
{
    int i;

    printf("Enter a City (1 - Coimbatore, 2 - Chennai, 3 - Agra): ");
    scanf("%d", &i);

    switch(i)
    {
        case 1:
            coimbatore();
            break;

        case 2:
            chennai();
            break;

        case 3:
            agra();
            break;

        default:
            printf("Invalid Input");
    }

    getch();
}

void coimbatore(void)
{
    printf("\nThe taste of Coimbatore: ANNAPOORNA");
}

void chennai(void)
{
    printf("\nBEAUTIFUL MARINA BEACH");
}

void agra(void)
{
    printf("\nSign of Love: TAJMAHAL");
}