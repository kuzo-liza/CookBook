#include "first_task.h"

void first_task()
{
    int input;
    printf("Insert a number of the program\n");
    scanf("%d", &input);
    switch(input)
    {
    case 1:
        a_gap_of_time();
        break;

    case 2:
        is_it_a_triangle();
        what_type_of_triangle_is_it();
        break;

    default:
        printf( "Badly insert\n" );
    }

}

