/*
Accept a string count small characters
*/

#include <stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    if(str == NULL)
    {
        printf("Invalid Input\n");
        return -1;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    iRet = CountSmall(Arr);
    printf("%d\n",iRet);

    return 0 ;
}