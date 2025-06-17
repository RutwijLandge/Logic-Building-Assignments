// Accept one char and check whether it is alphabet or not

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    bool bCheck = false;
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) )
    {
        bCheck = true;
    }
    return(bCheck);
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a Character\n");
    }

    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}