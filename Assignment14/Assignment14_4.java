/*
Enter no of rows :
5
Enter no of columns :
5
 1	 2	 3	 4	 5	
-1	-2	-3	-4	-5	
 1	 2	 3	 4	 5	
-1	-2	-3	-4	-5	
 1	 2	 3	 4	 5
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0,iCnt1 = 0,iCnt2 = 0;
             
        for(i = 1 ; i <= iRow; i++)
        {
            
            for(j = 1,iCnt1 = 1 ,iCnt2 = -1; j <= iCol; j++,iCnt1++,iCnt2--)
            {
                if((i%2) != 0)
                {
                    System.out.print(" "+iCnt1+"\t");
                }
                else
                {
                    System.out.print(iCnt2+"\t");
                }               
            }
            System.out.println();
        }
    }
}

class Assignment14_4
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