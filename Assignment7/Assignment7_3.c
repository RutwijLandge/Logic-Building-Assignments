//3. Write a program to find even factorial of given number

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iEvenFact = 1;
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
    }
   
    return iEvenFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factoial of number is %d  \n",iRet);
    return 0;
}
