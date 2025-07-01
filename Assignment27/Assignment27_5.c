#include <stdio.h>

void StrCatX(char *src , char *dest)
{
    if((src == NULL) || (dest == NULL))
    {   
        printf("Empty string\n");
        return;
    }

    while ((*src != '\0'))
    {
        src++;
    }
    *src = ' ';
    src++;
    while (*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    
    *src = '\0';   //last character in a string '\0'
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";                  //empty string

    StrCatX(arr , brr );

    printf("%s\n",arr);  //Marvellous Infosystem Logic Building
    
    return 0;

}