package demo;

public class demo {
	public static void d(int a[]) {
	int i=0;
	int j=a.length-1;
	while(i<=j) {
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
		
	}
	
		
	}
	
	public static void main(String args[])
	{
		int a[]= {1,0,3,5,0,0,1};
		int size=a.length;
		    d(a);
		    
		for(int i=0;i<size;i++) {
			
			System.out.print(a[i]+" ");
		}
		  
	}
	

}
