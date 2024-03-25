/* Swap two numbers (Get user input)*/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int a=input.nextInt();
		int b=input.nextInt();
		int t;
		System.out.println("Before Swapping a and b:"+" "+a+" "+b);
		t=a;
		a=b;
		b=t;
		System.out.println("After Swapping a and b:"+" "+a+" "+ b);
		}
}
/*Output:
5 10
Before Swapping a and b: 5 10
After Swapping a and b: 10 5
*/
