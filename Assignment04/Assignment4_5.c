// 5. Display diff between sum of factors and non factors
#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumnonFact = 0;
    int iDiff = 0;
    

    for(iCnt = 1 ; iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }

        else
        {
            iSumnonFact = iSumnonFact + iCnt;
        }
        
    }

    iDiff = iSumFact - iSumnonFact;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter a  Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Sum of factors and non factors is : %d \n",iRet);

    return 0;
}