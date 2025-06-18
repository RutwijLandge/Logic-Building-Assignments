/*
Accept a string and display difference in small & Capital characters
*/

#include <stdio.h>

int Difference(char *str)
{
    int iCountCap = 0, iCountSmall = 0,iDiff = 0;
    if(str == NULL)
    {
        printf("Invalid Input\n");
        return -1;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }

        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }
    iDiff = iCountSmall - iCountCap;
    return iDiff;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    iRet = Difference(Arr);
    printf("Difference in small and capital character is :%d\n",iRet);

    return 0 ;
}