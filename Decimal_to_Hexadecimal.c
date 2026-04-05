#include <stdio.h>
int main()
{
   int i,a[4],x,q,r;
   printf("Enter an integer to convert to Hexadecimal format:");
   scanf("%d",&x);
   for(i=0;i<4;i++)
   {
      r=x%16;
      x=x/16;
      a[3-i]=r;
   }
   for(i=0;i<4;i++)
   {
      if(a[i]==10)
      {printf("A");
       continue;}
     if(a[i]==11)
      {printf("B");
       continue;}
     if(a[i]==12)
      {printf("C");
       continue;}
     if(a[i]==13)
      {printf("D");
       continue;}
     if(a[i]==14)
      {printf("E");
       continue;}
     if(a[i]==15)
      {printf("F");
       continue;}
     if(a[i]==16)
      {printf("G");
       continue;}
     else
      printf("%d",a[i]);

        }
   printf("\n");
   return 0;
}
