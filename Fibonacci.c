
#include <stdio.h>
#include<math.h>
int isperfect(int n){
    int temp=  sqrt(n);
     if(temp*temp==n)
        return 1;
     else
       return 0;
     
       
    
}
int fib(int n){
    
    if(isperfect(5*n*n+4) || isperfect(5*n*n-4))
         return 1;
    else
         return 0;
    
         
}


int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(fib(n)){
        printf("valid");
        
    }else{
        printf("invalid");
        
    }
    

    return 0;
}







