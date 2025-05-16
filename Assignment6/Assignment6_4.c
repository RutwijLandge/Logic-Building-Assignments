//4. Print the table of given Number

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=10;iCnt++)
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

    Table(iValue);
    
    return 0;
}