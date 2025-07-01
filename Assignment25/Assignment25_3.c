/*
Enter string
Marvellous Multi OS
Modified string is : mARVELLOUS mULTI os


*/

#include <stdio.h>

void strupx(char *str)
{
    
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strupx(arr);

    printf("Modified string is : %s\n",arr);


    return 0;
}