/*
Enter no of rows :
4
Enter no of columns :
4
1	1	1	1	
2	2	2	2	
3	3	3	3	
4	4	4	4
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0;
             
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
               System.out.print(i+"\t");
                
            }
            System.out.println();
        }
    }
}

class Assignment12_5
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