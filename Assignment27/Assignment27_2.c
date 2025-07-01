#include <stdio.h>

void StrNCpyX(char *src , char *dest, int iCnt)
{
    if((src == NULL) || (dest == NULL))
    {   
        printf("Empty string\n");
        return;
    }

    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    
    *dest = '\0';   //last character in a string '\0'
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];                  //empty string

    StrNCpyX(arr , brr , 10);

    printf("%s\n",brr);  //Marvellous
    
    return 0;

}