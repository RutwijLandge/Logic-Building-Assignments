//5. Write a program which accept N and print first 5 multiple of N

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        
        iMulti = iCnt * iNo;
        printf("%d ",iMulti);
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