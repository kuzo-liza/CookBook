#include "timetable.h"
#include "first_task.h"
#include "matrix.h"

int main (void)
{
    int check;
    printf("Choose program\n");
    scanf("%i",&check);

    switch(check)
    {
    case 1:
        first_task();
        break;

    case 2:
        timetable();
        break;

    case 3:
        matrix();
        break;
    }
    system("pause");
    return 0;
}
