#include <stdio.h>
int main()
{
    char a;
    int n1,n2;
    printf("Enter an operation to perform(+,-,*,/):\n");
    scanf(" %c",&a);
    printf("enter 2 numbers:\n");
    scanf("%d %d",&n1,&n2);
    if(a=='/' && n2==0)
    {printf("not defined\n");
     return 0;
    }
    switch(a)
    {
        case '+':
        printf("Sum=%d\n",n1+n2);
        break;
        case '-':
        printf("difference=%d\n",n1-n2);
        break;
        case '*':
        printf("product=%d\n",n1*n2);
        break;
        case '/':
        printf("quotient=%d\n",n1/n2);
        break;

    };
    return 0;
}