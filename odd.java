import java.util.Scanner;
 
class OddOrEven
{
   public static void main(String args[])
   {
      int x;
      System.out.println("Enter an integer ");
      Scanner in = new Scanner(System.in);
      x = in.nextInt();
 
      if ( x % 2 == 0 )
         System.out.println("Number is even");
      else
         System.out.println("Number is odd");
   }
}
