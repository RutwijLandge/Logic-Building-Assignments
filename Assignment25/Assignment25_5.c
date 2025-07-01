/*
Enter string
Marvellous Infosystem by Piyush Manohar Khairnar
The number of white spaces are 5

*/

#include <stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if(*str == ' ')
        {
           iCount++;
        }
        
        str++;
    }
    return iCount;
    
}

int main()
{
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("The number of white spaces are %d\n",iRet);


    return 0;
}