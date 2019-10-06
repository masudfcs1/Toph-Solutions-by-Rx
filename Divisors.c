#include<stdio.h>



int main()
{
    int n,i;
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
            printf("%d\n",i);
        i++;
    }
    
    return 0;

}
