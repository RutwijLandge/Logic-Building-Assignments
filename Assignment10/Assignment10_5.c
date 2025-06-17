//1.Accept no from user and return diff of sum of even and odd digits

#include<stdio.h>

int CountDiff (int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;
   
    if(iNo<0)
    {
        iNo = -iNo;

    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
           iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10; 
    }

    iDiff = iEven - iOdd;

    return iDiff;
  
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CountDiff(iValue);

    printf("The difference of sum of even and odd digit is : %d \n",bRet);

    return 0;
}