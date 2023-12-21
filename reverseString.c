
#include <stdio.h>
void rev(char *p){
    if(*p){
        rev(p+1);
        printf("%c",*p);
    }
}
int main()
{
   char str[100];
   scanf("%s",str);
   rev(str);
    return 0;
}
