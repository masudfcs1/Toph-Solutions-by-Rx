#include<stdio.h>
#include<string.h>

void remove_spaces(char arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==' ')
        {
            for(j=i+1;j<n;j++)
                arr[j-1]=arr[j];

                n--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",arr[i]);
    }
}

int main()
{
   char a[1000];
   gets(a);
   int len=strlen(a);
   remove_spaces(a,len);
   return 0;
}

