package demo;

public class subarray {
	public static void d(int a[],int size) {
	
		for(int i=0;i<size;i++) {
			for(int j=i;j<size;j++)
			{
				for(int k=i;k<=j;k++) {
					
					System.out.print(a[k]+" ");
				}
				System.out.println();
				
			}
			
			
		}
		
	
		
	}
	
	public static void main(String args[])
	{
		int a[]= {1,2,3,4,5};
		int size=a.length;
		    d(a,size);
		    

		
		
	}
	

}
