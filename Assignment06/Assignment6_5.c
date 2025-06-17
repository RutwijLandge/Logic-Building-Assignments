//5. Print the table of given Number in reverse

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10;iCnt>=1;iCnt--)
    {
        iTable = iNo*iCnt;
        printf("%d ",iTable);
    }
    printf("\n");
   
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);
    
    return 0;
}