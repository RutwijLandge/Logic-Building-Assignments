//4. Write a program to find diffe between even and odd factorial of given number

#include <stdio.h>

int Factorialdiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;
    int iCnt  = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
            iEvenFact = iEvenFact*iCnt;
        }
        else
        {
            iOddFact = iOddFact*iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;
    return iDiff;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorialdiff(iValue);

    printf("Difference of Factoial number is %d  \n",iRet);
}
