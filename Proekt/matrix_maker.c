#include "matrix.h"


void matrix_maker(int **matrica,int cols, int rows)
{
    int i = 0;
    for(i; i<rows; i++)
    {
        int j = 0;
        for(; j<cols; j++)
        {
            if (i <= j)
                matrica[i][j] = i+1;
            else
                matrica[i][j] = j+1;
        }
    }

    if (cols >= rows)
    {
        int i = 0;
        for(i; i<rows; i++)
        {
            int j = 0;
            for(j; j<cols; j++)
            {

                if (i + j >= rows)
                    if (i >= j)
                        matrica[i][j] = rows - i;
                    else
                        matrica[i][j] = cols - j;

                printf("%i ",matrica[i][j]);
            }

            printf("\n");
        }
    } else {
        int i = 0;
        for(i; i<rows; i++)
        {
            int j = 0;
            for(j; j<cols; j++)
            {
                if (i + j >= cols)
                    if (i > j)
                        matrica[i][j] = rows - i;
                    else
                        matrica[i][j] = cols - j;

                printf("%i ",matrica[i][j]);

            }

            printf("\n");
        }
    }

}
