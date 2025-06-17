// Accept Division of a Student and display exam time

#include <stdio.h>


void DisplaySchedule(char chDiv)
{
    
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam time is 7 AM\n");

    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam time is 8:30 AM\n");

    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam time is 9:20 AM\n");

    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam time is 10:30 AM\n");

    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    

    return 0;
}