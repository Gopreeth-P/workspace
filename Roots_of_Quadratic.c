#include <stdio.h>
int main()
{
    int i,a,b,c;
    printf("Enter the coefficients of x^2,x and constant term respectively:\n");
    scanf("%d %d %d",&a,&b,&c);
    for(i=-1000;i<=1000;i++)
    {
        if(a*(i*i)+b*i+c==0)
        {
            printf("%d is the root of the equation\n",i);
        }
    }
    return 0;
}