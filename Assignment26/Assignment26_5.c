/*
Enter string
Marvellous
The reversed string is suollevraM
*/

#include <stdio.h>

void StrRevX(char *str)
{
    char Temp = '\0';
    char *start = NULL;
    char *end = NULL;
    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;

    }
    end--;
    
    while (start <= end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;
        start++;
        end--;
    }
    
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("The reversed string is %s\n",Arr);

    return 0;
}