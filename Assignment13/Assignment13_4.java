/*
Enter no of rows :
4
Enter no of columns :
5
4	4	4	4	4	
3	3	3	3	3	
2	2	2	2	2	
1	1	1	1	1
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0;
        
             
        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
               System.out.print(i+"\t");
                
            }
            System.out.println();
        }
    }
}

class Assignment13_4
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