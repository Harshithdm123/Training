

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

int distint(int a[], int n){
   int i,j;
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(a[i] == a[j])
         break;
      }
      if(j == i){
         printf("unique elements in an array is  %d ",a[i]);
         
      }
   }
   return -1;
}


int main()
{
    int n,i;
    int a[50];
    
    
    printf("Enter the elements");
    scanf("%d",&n);
   
    
  read(a,n);
   
    
    distint(a,n);
    printf("Unique elements are \t");
    
  
    return 0;
}
