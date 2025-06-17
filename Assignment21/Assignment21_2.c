// Accept n numbers and return smallest number

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[],int iLength )
{
    int iCnt = 0, iMin = 0;
    
    iMin = Arr[0];
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iMin))
        {
            iMin = Arr[iCnt];
        }
          
    }

   
    return(iMin);
    
   
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

    iRet = Maximum(p , iSize);
    
    printf("%d is minimum\n",iRet);
    
    free(p);

    return 0;
}