#include <stdio.h>
int main()
{
    char a[]="1100";
    int i;
    for(i=0;i<4;i++)
    {
    if(a[i]=='0')
    printf("lol 0");
    printf("%d\n",1+2^(3-i));
    }  
}