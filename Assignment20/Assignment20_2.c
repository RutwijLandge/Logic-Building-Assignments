// Accept n numbers and check index of first occurance of given number

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[],int iLength ,int iNO)
{
    int iCnt = 0, iCount = 0, iOcc = 0;
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] != iNO))
        {
            iOcc = -1;
        
        }
        else
        {
            iOcc = iCnt;
            break;
        }
          
    }

   
    return(iOcc);
    
   
}
int main()
{
    int iSize = 0, iCnt = 0, iCheck = 0, iRet = 0;
    
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number which is to be scanned\n");
    scanf("%d",&iCheck);

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

    iRet = FirstOcc(p , iSize, iCheck);
    
    printf("%d occur at %d index.\n",iCheck,iRet);
    
    free(p);

    return 0;
}