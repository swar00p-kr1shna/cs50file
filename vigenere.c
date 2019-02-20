#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int a, b,c, i, j;
    char e, f, w, temp;
    char the_word[30];
    char plnword[30];
    printf("The word\n");
    scanf("%s", the_word);
    printf("plaintext::\n");
    scanf("%c", &temp);
    fgets(plnword,30,stdin);

    b=-1;
    c=0;
    int k;
    while(c<strlen(plnword))
    {
      if(isalpha(plnword[c]))
       {
         b++;
         if(b>=strlen(the_word))
         {
            b=0;
         }
         i=the_word[b];
         j=plnword[c];
         i=i-97;
         j=j-97;
         k=(i+j)%26;
         k+=97;
         f=k;
         printf("%c", f);

       }
       else
       {
           printf("%c", plnword[c]);

       }
       c++;
    }

   return 0;
}