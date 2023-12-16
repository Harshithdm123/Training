
// To Check the Palindrome Numbers
#include <stdio.h>
#include<math.h>

int main()
{
int n;
int rev=0,num,rem;
printf("Enter the Number");
scanf("%d",&n);


num=n;


while(n>0){
    rem=n%10;
    n=n/10;
    rev=rev*10+rem;
   
}

if(num==rev){
    printf("True");
    
}
else{
    printf("False");
    
}

    return 0;
}
