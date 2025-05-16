//2. Accept no from user and count the no of odd digit

#include<stdio.h>

int CountOdd (int iNo)
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
        if((iDigit % 2) != 0)
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

    bRet = CountOdd(iValue);

    printf("The frequency of odd digit is : %d \n",bRet);

    return 0;
}