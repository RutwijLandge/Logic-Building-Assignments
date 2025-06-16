// Accept n numbers and return Differenece in Freq. of even and odd no.

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0, iECount = 0, iOCount = 0 , iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((((Arr[iCnt]) % 2) == 0))
        {
            iECount++;
        }
        else
        {
            iOCount++;
        }
       
    }

    iDiff = iECount - iOCount;
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

    iRet = Frequency(p , iSize);

    printf("The Difference in Frequency of Even and Odd number is : %d\n",iRet);

    free(p);

    return 0;
}