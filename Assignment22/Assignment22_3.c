// Accept one char and check whether it is digit or not

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(char ch)
{
    
    if(((ch >= '0') && (ch <= '9')) )
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is digit\n");
    }

    else
    {
        printf("It is not Digit\n");
    }

    return 0;
}