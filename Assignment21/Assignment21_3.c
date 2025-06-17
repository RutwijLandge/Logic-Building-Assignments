// Accept n numbers and return diff in largest and smallest number

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[],int iLength )
{
    int iCnt = 0, iMin = 0, iMax = 0,iDiff = 0;
    
    iMin = Arr[0];
    iMax = Arr[0];
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] < iMin))
        {
            iMin = Arr[iCnt];
        }

        else if((Arr[iCnt]) > iMax)
        {
            iMax = Arr[iCnt];
        }
          
    } 
    iDiff = iMax - iMin;
    return(iDiff);  
   
}
int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    
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

    iRet = Difference(p , iSize);
    
    printf("%d is difference between maximum and minimum\n",iRet);
    
    free(p);

    return 0;
}