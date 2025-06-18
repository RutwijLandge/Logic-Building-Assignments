/*
Accept a string and reverse it
*/

#include <stdio.h>
void StrRevX(char *str)
{
    char Temp = '\0';
    char *start = NULL;       
    char *end = NULL;
    start = str;
    end = str;
    int iCount = 0;

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

    printf("Enter value string : \n");
    scanf("%[^'\n']s",Arr);
    
    StrRevX(Arr);

    printf("Reverse string is %s\n",Arr);

    return 0;
}