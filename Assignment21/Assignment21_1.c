// Accept n numbers and return largest number

#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[],int iLength )
{
    int iCnt = 0, iMax = 0;
    
    iMax = Arr[0];
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iMax))
        {
            iMax = Arr[iCnt];
        }
          
    }

   
    return(iMax);
    
   
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
    
    printf("%d is maximum\n",iRet);
    
    free(p);

    return 0;
}