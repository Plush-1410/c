#include<stdio.h>
int main(){
    int papi[4][4];
    int i, j;
    printf("Enter the values for a 4x4 matrix:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &papi[i][j]);
        }
    }
    printf("The matrix you entered is:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", papi[i][j]);
        }
        printf("\n");
    }
    return 0;
}