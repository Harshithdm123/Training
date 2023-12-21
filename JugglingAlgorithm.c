
#include <stdio.h>
#include<math.h>


int  gcd(int a,int b){
    if(b==0)
       return a;
    return (b,a%b);
    
}

void leftrotate(int a[],int n,int k){
    int sets=gcd(n,k);
    int temp,i,j,d;
    for(i=0;i<sets;i++){
        temp=a[i];
        j=i;
        while(1){
            
            d=j+k;
            if(d>=n)
              d=d-n;
            if(d==i)
              break;
            a[j]=a[d];
            j=d;
            
        }
        a[j]=temp;
        
    }
    
    
}

int main()
{
    int i,n;
    int k;
    int a[100];
    
    printf("Enter the element");
    scanf("%d",&n);
    printf("Enter the value of k");
    scanf("%d",&k);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    leftrotate(a,n,k);
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        
    }
    
    return 0;
}


