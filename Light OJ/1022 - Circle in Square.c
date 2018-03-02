#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
int main()
   {
       int i=1,t;
       double r,area;
      scanf("%d",&t);
      while(t--)
      {
          scanf("%lf",&r);
 
          area=((r+r)*(r+r))-(PI*r*r);
          printf("Case %d: %.2lf\n",i,area);
          i++;
      }
 
       return 0;
   }
