#include<stdio.h>

int main(void)
{

   int a, i, j, k, m;
   scanf("%d", &a);
   if(a!=4)
   {
       printf("foo\n");
       printf("Enter 4\n");
       scanf("%d", &a);
   }
   else
   {
    for(i=0;i<a;i++)
    {
       for(j=a;j>=i+1;j--)
       {
           printf(" ");

       }
       for(k=0;k<=i;k++)
       {
           printf("#");
       }
       printf("  ");
       for(m=0;m<=i;m++)
       {
           printf("#");
       }
       printf("\n");
   }
   return 0;
   }
}