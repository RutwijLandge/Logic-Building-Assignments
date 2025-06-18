/*
Accept one character from user check whether it is special symbol
*/

#include <stdio.h>
#include <stdbool.h>

bool chkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') ||(ch == '#') ||(ch == '$') ||(ch == '%') ||(ch == '^') ||(ch == '&') ||(ch == '*'))
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = chkSpecial(cValue);

    if(bRet == true)
    {
        printf("%c is special symbol \n",cValue );
    }
    else
    {
        printf("%c is not a special symbol \n",cValue );
    }

    return 0;
}