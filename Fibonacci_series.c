#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter size of series:\n");
    scanf("%d", &n);
    if(n<=0)
    printf("invalid input\n");
    int a[n],i;
    for(i=0;i<n;i++)
    {
        a[0]=1,a[1]=1;
        a[i+2]=a[i]+a[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}