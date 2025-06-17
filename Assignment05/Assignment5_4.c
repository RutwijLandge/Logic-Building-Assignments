//4. Print all odd no up to user input

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) != 0)
        {
            printf("%d ",iCnt);
        }
        
    }

    printf(" \n");
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}