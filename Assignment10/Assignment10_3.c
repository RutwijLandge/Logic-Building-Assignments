//3. Accept no from user and count the no between 3 and 7

#include<stdio.h>

int CountRange (int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
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

    bRet = CountRange(iValue);

    printf("The frequency of digit between 3 and 7 is : %d \n",bRet);

    return 0;
}