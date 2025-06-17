import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int i = 0;
        int iCnt = 0;
        
        for(i = 2,iCnt = 1 ; iCnt <= iNo ; i = i + 2, iCnt++)
        {
            System.out.print(i+"\t");
        }
        System.out.println();
    }
}

class Assignment11_5
{
    public static void main(String A [])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();
        System.out.println("Enter a no upto which you want to display pattern:");
        iValue = sobj.nextInt();
        pobj.Display(iValue);

    }
}