import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int i = 0;
        char ch = '\0';
        for(i = 1 ,ch = 'A'; i <= iNo ; i++,ch++)
        {
            System.out.print(ch+"\t");
        }
        System.out.println();
    }
}

class Assignment11_1
{
    public static void main(String A [])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();
        System.out.println("Enter a no upto which you want to display characters:");
        iValue = sobj.nextInt();
        pobj.Display(iValue);

    }
}