#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int a, b, d, i, num;
    char str, temp;
    char plaintext[30];
    printf("Type the seperation: ");
    scanf("%d", &d);
    printf("Type the word\n");
    scanf("%c", &temp);
    fgets(plaintext,30,stdin);
    for(i=0;i<strlen(plaintext);i++)
    {

      char e;
      e=plaintext[i];

      if(isalpha(e))
      {



       if(isupper(e))
        {
         num=0;
         int c;
         c=plaintext[i];
         c=c-65;
         b=(c+d)%26;
         b+=65;
         str=b;
         printf("%c", str);
        }
       else
        { num=0;
         int c;
         c=plaintext[i];
         c=c-97;
         b=(c+d)%26;
         b+=97;
         str=b;
         printf("%c", str);

        }

       }
       else
       {
        printf("%c", e);
       }
    }
    printf("\n");

    return 0;
}