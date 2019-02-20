#include<stdio.h>

int main()
{
     int a, b, c, d, i, j, f, l, sum=0, sum1=0, tot;
     c=0;
     long long number, temp, rev_num=0, req;
     scanf("%lld", &number);

     while(number>0)
     {
         rev_num=rev_num*10+number%10;
         number/=10;
         c++;
     }
     temp=rev_num;
     req=temp;
     for(i=0;i<c;i++)
     {
         if(i%2!=0)
         {
             b=temp%10;
             b*=2;
             l=b%10;
             f=b/10;
             if(f>0)
             {
                 d=f+l;
                 sum+=d;
             }
             else
             {
                 sum+=b;
             }
         }
         else
         {
             b=temp%10;
             sum1+=b;
         }
         temp/=10;
     }
     tot=sum1+sum;
     if(tot%10==0)
     {
         if((req%100==73||req%100==43) && c==15)
         {
             printf("AMEX");
         }
         else if((req%100==15 || req%100==25 || req%100==35 || req%100==45 || req%100==55) && c==16)
         {
             printf("MASTERCARD");

         }
         else if(req%10==4 && (c==13 || c==16))
         {
             printf("VISA");
         }
         else
         {
             printf("INVALID");
         }
     }
     else
     {
          printf("INVALID");
     }

}