//3. Print number line according user input

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = (-iNo); iCnt <= iNo; iCnt++) // for can start from negative no also
    {
        printf("%d ",iCnt);
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