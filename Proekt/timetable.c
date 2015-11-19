#include "timetable.h"

void timetable(void)
{
    int number_of_lessons, length_of_the_lesson, short_break, long_break, number_of_lessons_before_a_long_break;
    printf("Insert a number of lessons\n");
    scanf("%d", &number_of_lessons);

    printf("Insert length of the lesson\n");
    scanf("%d", &length_of_the_lesson);

    printf("Insert length of the short break\n");
    scanf("%d", &short_break);

    printf("Insert length of the long break\n");
    scanf("%d", &long_break);

    printf("Insert number of lessons before a long break\n");
    scanf("%d", &number_of_lessons_before_a_long_break);

    timetable_work(number_of_lessons, length_of_the_lesson, short_break, long_break, number_of_lessons_before_a_long_break);
}






