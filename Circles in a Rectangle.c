#include<stdio.h>

int main()
{
   double area_rec,area_c,r,M_PI=3.1416;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%lf",&r);
    area_rec=(2*r)*(4*r);
    area_c=2*(M_PI*r*r);
    printf("Case %d: %.2lf\n",i,area_rec-area_c);
    }
  return 0;
}
