#include<stdio.h>
int main()
     {
       int t,num,rem,rev=0,temp,i=1;
       scanf("%d",&t);
 
       while(t--)
       {
         rev=0;
          scanf("%d",&num);
          temp=num;
          printf("Case %d: ",i);
          while(num!=0)
          {
              rem=num%10;
              rev=rev*10+rem;
              num=num/10;
          }
          if(temp==rev)
          {
              printf("Yes\n");
          }
          else
          {
              printf("No\n");
          }
          i++;
       }
 
         return 0;
     }
