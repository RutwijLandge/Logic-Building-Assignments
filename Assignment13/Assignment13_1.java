/*
Enter no of rows :
4
Enter no of columns :
4
A	B	C	D	
A	B	C	D	
A	B	C	D	
A	B	C	D
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0;
        char ch = '\0';
             
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
            {
               System.out.print(ch+"\t");
                
            }
            System.out.println();
        }
    }
}

class Assignment13_1
{
    public static void main(String A [])
    {
        int iValue1 = 0,iValue2 = 0;

        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter no of rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter no of columns :");
        iValue2 = sobj.nextInt();

        pobj.Display(iValue1,iValue2);

    }
}