/*
Enter no of rows :
3
Enter no of columns :
5
A	A	A	A	A	
B	B	B	B	B	
C	C	C	C	C
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0;
        char ch = '\0';
             
        for(i = 1, ch = 'A'; i <= iRow; i++,ch++)
        {
            for(j = 1; j <= iCol; j++)
            {
               System.out.print(ch+"\t");
                
            }
            System.out.println();
        }
    }
}

class Assignment13_3
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