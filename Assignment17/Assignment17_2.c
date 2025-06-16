/*
Enter Number of rows
4
Enter Number of cloumns
4
*	*	*	#	
*	*	#	@	
*	#	@	@	
#	@	@	@

*/


#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else if((i < j))
            {
                printf("*\t");
            }
            else if(i > j)
            {
                printf("@\t");   
            }
           

            
        }

        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter Number of cloumns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}