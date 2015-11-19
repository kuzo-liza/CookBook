#include "first_task.h"

void what_type_of_triangle_is_it()
{
    printf("Insert 3 sites of triangle\n");
    int d,e,f;
    scanf("%d%d%d", &d,&e,&f);

    if ((d*d > e*e + f*f) || (e*e > d*d + f*f) || (f*f > d*d + e*e))
    {
        printf("This is an obtuse triangle\n");
    }

    int max;

    if ((d>e)&&(d>f))
    {
        max = d;
        if  ((max*max < e*e + f*f))
        {
            printf("This is an acute-angled triangle");
        }
    }
    if ((e>d)&&(e>f))
    {
        max = e;

        if  ((max*max < d*d + f*f))
        {
            printf("This is an acute-angled triangle");
        }
    }
    else
    {
        max = f;

        if ((max*max < d*d + e*e))
        {
            printf("This is an acute-angled triangle");
        }
    }

    if ((d*d == e*e + f*f) || (e*e == d*d + f*f) || (f*f == d*d + e*e))
    {
        printf("This is a right triangle\n");
    }
}

