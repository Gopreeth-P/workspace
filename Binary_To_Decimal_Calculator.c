#include <stdio.h>
#include <math.h>
int main()
{
    int i,sum=0,x;
    printf("Enter the size of binary number:\n");
    scanf("%d",&x);
    char a[x];
    printf("Enter binary number:\n");
    scanf("%s",&a);
    for(i=x-1;i>=0;i--)
    {
        if(a[i]=='1')
        {
            sum=sum+pow(2,(x-1)-i);
        }
        else
        {
            sum=sum+0;
        }

    }
    printf("%d\n",sum);
    return 0;

    
}