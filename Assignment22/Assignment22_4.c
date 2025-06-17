// Accept one char and check whether it is small case or not

#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char ch)
{
    
    if(((ch >= 'a') && (ch <= 'z')) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is small case\n");
    }

    else
    {
        printf("It is not small case \n");
    }

    return 0;
}