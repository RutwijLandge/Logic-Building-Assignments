// Accept n numbers check whether given number is present or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool Frequency(int Arr[],int iLength ,int iNO)
{
    int iCnt = 0, iCount = 0;
    bool Flag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == iNO))
        {
            Flag = true;
            break;
        }
          
    }

   
    return(Flag);
    
   
}
int main()
{
    int iSize = 0, iCnt = 0, iCheck = 0;
    bool bRet = false;
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

    bRet = Frequency(p , iSize, iCheck);
    
    if(bRet == true)
    {
        printf("%d is present.\n",iCheck);
    }
    else
    {
        printf("%d is not present.\n",iCheck);
    }
    
    free(p);

    return 0;
}