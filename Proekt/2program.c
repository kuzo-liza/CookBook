#include "first_task.h"

void is_it_a_triangle()
{
    printf("Insert 3 sites of triangle\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if ((a >= b+c) || (b >= c+a) || (c >= a+b))
    {
        printf("This is not a triangle\n");
    }
    else
    {
        printf("This is a triangle\n");
    }
}
