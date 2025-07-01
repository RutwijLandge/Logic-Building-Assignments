#include <stdio.h>

void StrCpyX(char *src , char *dest)
{
    if((src == NULL) || (dest == NULL))
    {   
        printf("Empty string\n");
        return;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0';   //last character in a string '\0'
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];                  //empty string

    StrCpyX(arr , brr);

    printf("%s\n",brr);  //Marvellous Multi OS
    
    return 0;

}