
// To Check the Amnstrong Numbers
#include <stdio.h>
#include<math.h>

int main()
{
int n;
int rev=0,num,rem;
printf("Enter the Number");
scanf("%d",&n);
num=n;

int count;
while(n>0){
    n=n/10;
    count++;
    
    
}
n=num;

while(n>0){
    rem=n%10;
    n=n/10;
    rev=rev+pow(rem,count);
   
}
printf("count is  %d",count);
if(rev==num){
    printf("True");
    
}
else{
    printf("False");
    
}

    return 0;
}
