#include <stdio.h>

int main()
{
    int matriksA[3][3];
    int i,j;

    printf("Matriks A\n");
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
    printf("elemen[%d][%d]: ", i, j);
    scanf("%d", &matriksA[i][j]);
    }
    }  
    printf("\nHasil Matriks 3x3:\n");
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
    printf("%d ", matriksA[i][j]);
    }
    printf("\n\n");
    }
}

