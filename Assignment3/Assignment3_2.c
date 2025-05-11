#include <stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i < iNo;i++)
    {
        if(((i%2) == 0) && ((iNo%i) == 0))  // even so exclude 1
        {
            printf("%d ",i);
        }
    }
}



int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}