//Accept no from user and calculate its frequency of 4

#include<stdio.h>

int CountFour (int iNo)
{
    int iDigit = 0;
    int iCount = 0;
   
    if(iNo<0)
    {
        iNo = -iNo;

    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
           iCount = iCount + 1;
        }
        iNo = iNo / 10; 
    }

    return iCount;
  
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CountFour(iValue);

    printf("The frequency of four is %d \n",bRet);

    return 0;
}