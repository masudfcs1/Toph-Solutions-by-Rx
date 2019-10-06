#include<stdio.h>
#include<string.h>

int main()
{
   char a[1000];
   gets(a);
   int len;
   len=strlen(a);
   if(a[len-2]=='g')
    printf("Byangette\n");
   else
    printf("Byang\n");
    return 0;
}
