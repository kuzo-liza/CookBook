#include "matrix.h"

void matrix(void)
{
    int n ;
    int m ;

    printf("Insert n\n");
    scanf("%i",&n);

    printf("Insert m\n");
    scanf("%i",&m);

    int **matrica=(int **)malloc(m*sizeof(int*));
    int i =0;

    for(i; i<m; i++)
        matrica[i] = (int*) malloc (n*sizeof(int));
    matrix_maker(matrica,n,m);

}
