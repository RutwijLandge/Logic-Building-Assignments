//4. Write a program to find odd factorial of given number

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iOddFact = 1;
    int iCnt  = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iOddFact = iOddFact*iCnt;
        }
    }
   
    return iOddFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factoial of number is %d  \n",iRet);
}
