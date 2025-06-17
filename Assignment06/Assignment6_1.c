//1. print the range of number

#include<stdio.h>
void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo <= 50)
    {
        printf("%d is small.\n",iNo);
    }
    else if(iNo <= 100)
    {
        printf("%d is medium.\n",iNo);
    }
    else if(iNo > 100)
    {
        printf("%d is large.\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    Number(iValue);

    return 0;
}