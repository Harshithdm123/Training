
//Bubble sort
#include <stdio.h>
void read(int a[],int n){
    int i;
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
}
void print(int a[],int n){
    int i;
    
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        
    }
}
void swap(int *p,int *q){
    
    int temp=*p;
    *p=*q;
    *q=temp;
    
}
void bubble(int a[],int n){
    int i, j,swapped;
    for(i=0;i<n-1;i++)
    {
        swapped=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            {
                swapped=1;
                swap(&a[j],&a[j+1]);
                
            }
            
            
            
        }
        if(swapped==0)
            break;
            
        
        
    }
    
    
    
}


int main()
{
    int n,i;
    int a[50];
    
    
    printf("Enter the elements");
    scanf("%d",&n);
   
    
  read(a,n);
   
    
    bubble(a,n);
    printf("sorted\t");
    
    print(a,n);
  
    return 0;
}
