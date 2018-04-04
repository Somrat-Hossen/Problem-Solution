#include<stdio.h>
#include<math.h>
int decimal(int n);
int main()
   {
 
         int k,l,m,n,a,b,c,d,x,y,z,p,t,i=1;
         scanf("%d",&t);
 
         while(t--)
         {
         scanf("%d.%d.%d.%d",&k,&l,&m,&n);
         scanf("%d.%d.%d.%d",&x,&y,&z,&p);
 
           a=decimal(x);
           b=decimal(y);
           c=decimal(z);
           d=decimal(p);
           if(k==a&& l==b && m==c && n==d)
           {
              printf("Case %d: Yes\n",i);
           }
 
           else
           {
            printf("Case %d: No\n",i);
           }
           i++;
         }
           return 0;
           }
 
       int decimal(int n)
         {
         int rem,result=0,i=0;
         while(n!=0)
         {
         rem=n%10;
         result=result+rem*pow(2,i);
         i++;
         n=n/10;
         }
         return result;
         }
