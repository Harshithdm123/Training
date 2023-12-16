
#include <stdio.h>
void call(int x,int y)
{
   x=x+10;
  y=y+30;
    printf(" inside x=%d y=%d",x,y);
  
}
int main()
{
    int a=10;
    int b=90;
    printf("value before  a=%d  b=%d \n",a,b);
    call(a,b);
      printf("value After a= %d  b=%d \n",a,b);
    return 0;
    
    
}
