
#include <stdio.h>

int main()
{
    int n;
    int lucky;
    
    
    printf("Enter the number");
     scanf("%d",&n);
     lucky=((n%9)==0)?9:n%9;
     printf("lucky number is %d", lucky);
    
     
    return 0;
}
