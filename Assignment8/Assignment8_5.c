//5. convert area into square feet to square meter

#include <stdio.h>

double SquareMeter(int iValue)
{
    double iSM = 0.0;
    iSM = iValue * 0.0929;
    return iSM;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter arae in square feet \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is %lf \n",dRet);
}