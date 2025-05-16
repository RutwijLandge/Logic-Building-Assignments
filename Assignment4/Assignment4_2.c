// 2. Display factors in decresing order
#include <stdio.h>

void DescFact(int iNo)
{
    int iCnt = 0;
    

    for(iCnt = (iNo/2) ; iCnt >= 1 ;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ",iCnt);
        }
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter a  Number\n");
    scanf("%d",&iValue);

    DescFact(iValue);

    return 0;
}