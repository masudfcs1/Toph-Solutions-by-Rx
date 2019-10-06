#include<stdio.h>

int main()
{
   char a[1000];
   gets(a);
   int i,sm=0,cap=0;
   for(i=0;i<strlen(a);i++)
   {
       if(a[i]>='a' && a[i]<='z')
        sm++;
       else if(a[i]>='A' && a[i]<='Z')
        cap++;
   }
   printf("%d %d",cap,sm);
   
   return 0;
}
