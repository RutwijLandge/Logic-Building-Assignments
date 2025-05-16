//4. Accept no from user and return multiplication of digits

#include<stdio.h>

int MultiDigits (int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
   
    if(iNo<0)
    {
        iNo = -iNo;

    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }
        
        iNo = iNo / 10; 
    }

    return iMulti;
  
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = MultiDigits(iValue);

    printf("The Multiplication of digits is : %d \n",bRet);

    return 0;
}