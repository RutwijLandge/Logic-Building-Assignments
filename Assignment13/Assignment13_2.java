/*

Enter no of rows :
4
Enter no of columns :
4
A	B	C	D	
a	b	c	d	
A	B	C	D	
a	b	c	d
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0;
        char ch1 = '\0',ch2 = '\0';
             
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1,ch1 = 'A', ch2 = 'a'; j <= iCol; j++,ch1++,ch2++)
            {
                if(i%2 != 0)
                {
                    System.out.print(ch1+"\t");
                }
                else
                {
                    System.out.print(ch2+"\t");
                }
               
                
            }
            System.out.println();
        }
    }
}

class Assignment13_2
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