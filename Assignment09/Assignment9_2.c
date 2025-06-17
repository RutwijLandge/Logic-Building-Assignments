//1.Accept number and display whether it contain zero or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkZero (int iNo)
{
    int iDigit = 0;
    BOOL bValue = FALSE;
    if(iNo<0)
    {
        iNo = -iNo;

    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bValue = TRUE;
            break;
        }
        iNo = iNo / 10; 
    }

    return bValue;
  
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("It does not contain zero\n");
    }
    return 0;
}