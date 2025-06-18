/*
Accept a string count capital characters
*/

#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;
    if(str == NULL)
    {
        printf("Invalid Input\n");
        return -1;
    }

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    iRet = CountCapital(Arr);
    printf("%d\n",iRet);

    return 0 ;
}