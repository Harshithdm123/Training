
#include <stdio.h>

void count(char *p,int A, int a){
    int count=0;
    while(*p){
        if(*p==A||*p==a){
            count++;
            
        }
        p++;
        
    }
    if(count>0){
        printf("%c(%d)\n",A,count);
    }
    
}
int main()
{
    char *q=(char *)malloc(100*sizeof(char));
    int A=65;
    int a=97;
    scanf("%[^\n]s",q);
    for(;A<=90;A++,a++){
        count(q,A,a);
    }

    return 0;
}