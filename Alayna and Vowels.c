#include<stdio.h>
#include<string.h>

void count_vowels(char arr[],int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' ||arr[i]=='u' ||arr[i]=='A' ||arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U')
        {
            count++;
        }
    }
    printf("%d",count);
}

int main()
{
   char a[1000];
   gets(a);
   int len=strlen(a);
   count_vowels(a,len);
  return 0;
}

