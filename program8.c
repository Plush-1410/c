    #include <stdio.h>
    #include <string.h>

    // Define structure
    struct Students
    {
        int rollNo;
        char name[50];
        float marks;
    };

    int main(void)
    {
        // Declare structure variable
        struct Students s1;

        // Input values
        printf("Enter Roll Number: ");
        scanf("%d", &s1.rollNo);

        printf("Enter Name: ");
        scanf(" %49[^\n]", s1.name);


        printf("Enter Marks: ");
        scanf("%f", &s1.marks);

        // Display values
        printf("\n--- Student Details ---\n");

        printf("Roll Number : %d\n", s1.rollNo);
        printf("Name        : %s\n", s1.name);
        printf("Marks       : %.2f\n", s1.marks);

        return 0;
    }