#include "timetable.h"

void timetable_work(int number_of_lessons, int length_of_the_lesson, int short_break, int long_break, int number_of_lessons_before_a_long_break)
{
    int i=1;
    int j=9*60;

    for (i; i <= number_of_lessons; i++)
    {
        printf("Lesson:%i\n",i);

        if (j%60 < 10){printf("Begins:%i:0%i\n",j/60,j%60);}
        else printf("Begins:%i:%i\n",j/60,j%60);

        j+=length_of_the_lesson;

        if (j%60 < 10){printf("Ends:%i:0%i\n",j/60,j%60);}
        else printf("Ends:%i:%i\n",j/60,j%60);

        if (i == number_of_lessons_before_a_long_break) {j += long_break;}
        else {j += short_break;}
    }
}
