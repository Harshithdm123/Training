import java.util.*;
public class Main
{
    static int fibo(int n){
        if(n==1||n==2){
            return 1;
        }
        
        else
         return fibo(n-1)+fibo(n-2);
         
        
    }
    
	public static void main(String[] args) {
	    int n;
	     System.out.println("Enter the value of n");
	    Scanner sc=new Scanner(System.in);
	    n=sc.nextInt();
	   
		System.out.println("Output will be "+fibo(n));
	}
}