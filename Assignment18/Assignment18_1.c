// Accept n numbers and diff in summation of even and odd no.
/*
Enter the number of elements
6
Enter 6 elements 
Enter element 1 : 85
Enter element 2 : 66
Enter element 3 : 3
Enter element 4 : 80
Enter element 5 : 93
Enter element 6 : 88
Result is 53

*/
#include <stdio.h>
#include <stdlib.h>

int Differenece(int Arr[],int iLength)
{
    int iCnt = 0, iESum = 0 ,iOSum = 0,iDiff = 0 ;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt])%2) == 0)
        {
            iESum = iESum + Arr[iCnt];
        }
        else
        {
            iOSum = iOSum + Arr[iCnt];
        }
    }
    iDiff = iESum -iOSum;
    return(iDiff);
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Differenece(p , iSize);
    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}