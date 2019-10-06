#include<stdio.h>

int main()
{
    int count=0,n,i;
    scanf("%d", &n);
    i=1;
    while(i<n)
    {
        if(n%i==0)
        {

            count++;
        }

        i++;
    }
     printf("%d\n",count);

    return 0;

}

