/*
Accept a string check vowel in it
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    int iCount = 0;
    bool Flag = false;
    if(str == NULL)
    {
        printf("Invalid Input\n");
        return -1;
    }

    while (*str != '\0')
    {
        if((*str == 'a') ||(*str == 'e') ||(*str == 'i') ||(*str == 'o') ||(*str == 'u') ||(*str == 'A') ||(*str == 'E') ||(*str == 'I') ||(*str == 'O') ||(*str == 'U') )
        {
            Flag = true;
            break;
        }
        str++;
    }
    
    return Flag;

}
int main()
{
    char Arr[20];
    bool bRet = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    bRet = ChkVowel(Arr);

    
    if(bRet == true)
    {
        printf("String has vowel\n");
    }
    else
    {
        printf("String doesn't have vowel\n");
    }

    return 0 ;
}