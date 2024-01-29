import java.util.*;

class ExceptionDemo
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[] = {10,20,30,40,50};

        System.out.println("Enter the index from you want to fetch data");
        int iIndex = sobj.nextInt();

        System.out.println("Data is :"+Arr[iIndex]);
    }
}


