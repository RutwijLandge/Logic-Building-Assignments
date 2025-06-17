//3. Print the factorial of given Number

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }

    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet  = Factorial(iValue);
    printf("Factorial of Number is %d\n",iRet);
    return 0;
}