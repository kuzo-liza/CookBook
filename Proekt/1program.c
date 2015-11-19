#include "first_task.h"

void a_gap_of_time()
{
    printf("Insert time of the beginning\n");
    int hour_beginning, minutes_beginning, seconds_beginning;
    scanf("%d%d%d", &hour_beginning, &minutes_beginning, &seconds_beginning);

    printf("Insert time of the end\n");
    int hour_end, minutes_end, seconds_end;
    scanf("%d%d%d", &hour_end, &minutes_end, &seconds_end);

    int beginning_number, end_number, final_number;
    beginning_number = hour_beginning * 3600 + minutes_beginning * 60 + seconds_beginning;
    end_number = hour_end * 3600 + minutes_end * 60 + seconds_end;

    final_number = end_number - beginning_number;
    printf("%d", final_number);
}

