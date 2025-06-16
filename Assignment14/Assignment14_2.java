/*

Enter no of rows :
5
Enter no of columns :
5
2	4	6	8	10	
1	3	5	7	9	
2	4	6	8	10	
1	3	5	7	9	
2	4	6	8	10
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0,j = 0,iCnt1 = 0,iCnt2 = 0;
        
             
        for(i = 1 ; i <= iRow; i++)
        {
            
            for(j = 1,iCnt1 = 2, iCnt2 = 1; j <= iCol; j++)
            {
                if((i%2) != 0)
                {
                    System.out.print(iCnt1+"\t");
                }
                else
                {
                    System.out.print(iCnt2+"\t");
                }

                iCnt1 = iCnt1 + 2;
                iCnt2 = iCnt2 + 2;
               
                
            }
            System.out.println();
        }
    }
}

class Assignment14_2
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