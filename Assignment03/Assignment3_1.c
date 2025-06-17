#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = iNo;
    int iEven = 0;
    for(iCnt = iNo ; iCnt > 0 ; iCnt--)
    {
        iEven = iEven + 2;
        printf("%d ",iEven);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}