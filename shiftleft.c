
#include <stdio.h>

int main()
{
    int k ,n,i,j;
    int temp;
    
    int arr[50];
    printf("Enter the number n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("Enter the number k");
    scanf("%d",&k);
    
    
    for(j=0;j<k;j++){
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
             
        }
       arr[n-1]=temp;
        //  printf("arr elements",arr[i]);
       
    }
 for(i=0;i<n;i++){
         printf("%d\t",arr[i]);
        }
   
   
   
    return 0;
    
    
}
