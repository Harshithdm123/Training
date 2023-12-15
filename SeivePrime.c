
// Seive Algorithm to check prime number
#include <stdio.h>

void seive(int N){
    int arr[N+1];
    int i,j;
    for(i=0;i<=N;i++) 
      arr[i]=1;
      
    for(i=2;i<=N;i++){
        if(arr[i]==1){
            for(j=i*i;j<=N;j=j+i)
                arr[j]=0;
                
        }
    }
      for(i=2;i<=N;i++){
         if(arr[i]==1)
          printf( " %d \t", i);
           
      }
    
    
}

int main()
{
    int N;
    printf("Enter the Number");
    scanf(" %d ",&N);
     seive(N);
    return 0;
    
}




