/*
Enter no of rows :
4
Enter no of columns :
4
1	2	3	4	
2	3	4	5	
3	4	5	6	
4	5	6	7
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0,iCnt1 = 0,iCnt2 = 0;
             
        for(i = 1,iCnt1 = 1 ; i <= iRow; i++,iCnt1++)
        {
            
            for(j = 1,iCnt2 = iCnt1; j <= iCol; j++,iCnt2++)
            {
                System.out.print(iCnt2+"\t");             
            }
            System.out.println();
        }
    }
}

class Assignment14_5
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