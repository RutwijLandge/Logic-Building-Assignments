// Accept n numbers and check occurance of given number within given range

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[],int iLength ,int iStart, int iEnd)
{
    int iCnt = 0, iCount = 0, iOcc = -1;
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\n",Arr[iCnt]);
        
        }
        
          
    } 
   
}
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

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

    Range(p,iSize,iValue1,iValue2);
    free(p);

    return 0;
}