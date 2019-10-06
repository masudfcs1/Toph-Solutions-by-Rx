#include<stdio.h>
int main()
{
    int i,n,sum=0,sum2=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum2+=a;
    }
    printf("%d",sum-sum2);
    return 0;
}
