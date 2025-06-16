import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int i = 0;
        
        for(i = 1 ; i <= iNo ; i++)
        {
            System.out.print("#\t"+i+"\t"+"*\t");
        }
        System.out.println();
    }
}

class Assignment11_4
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