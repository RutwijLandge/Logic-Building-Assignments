// Accept n numbers and return the summation of digits in each number

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[],int iLength )
{
    int iCnt = 0, iDigit = 0;
    
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iSum = 0;
        int iNo = Arr[iCnt];
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d \n",iSum);
                 
    }    
   
}
int main()
{
    int iSize = 0, iCnt = 0;
    
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

    Display(p,iSize);
    
    free(p);

    return 0;
}