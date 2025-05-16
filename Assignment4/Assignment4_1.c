// 1. To find the Multiplication of factors of input number
#include <stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    for(iCnt = 1; iCnt <=(iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a  Number\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d\n",iRet);

    return 0;
}