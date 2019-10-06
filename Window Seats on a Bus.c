#include<stdio.h>

int main()
{
    float l,w,d,result;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          scanf("%f%f%f",&l,&w,&d);
    result=(l*w)-(l*d);
    printf("Case %d: %.2f\n",i,result/2);
    }
    
    return 0;

}
