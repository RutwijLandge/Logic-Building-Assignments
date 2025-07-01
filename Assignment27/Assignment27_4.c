#include <stdio.h>

void StrCpyCap(char *src , char *dest)
{
    if((src == NULL) || (dest == NULL))
    {   
        printf("Empty string\n");
        return;
    }

    while ((*src != '\0'))
    {
        if(((*src >= 'a') && (*src <= 'z')) || (*src == ' '))
        {
            *dest = *src;
            dest++;
        }
        
        src++;
    }
    
    *dest = '\0';   //last character in a string '\0'
}
int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];                  //empty string

    StrCpyCap(arr , brr );

    printf("%s\n",brr);  //arvellous multi
    
    return 0;

}