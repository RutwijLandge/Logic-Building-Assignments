/*
Enter no of rows :
3
Enter no of columns :
5
5	4	3	2	1	
5	4	3	2	1	
5	4	3	2	1
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0;
             
        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment12_3
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