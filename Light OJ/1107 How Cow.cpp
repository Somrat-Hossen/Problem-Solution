#include<bits/stdc++.h>
 
using namespace std;
 
int main()
     {
      int t,x1,y1,x2,y2,num,x,y,i=1;
      cin>>t;
 
      while(t--)
      {
          printf("Case %d:\n",i);
          scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
          cin>>num;
          while(num--)
          {
              scanf("%d %d",&x,&y);
              if((x>=x1)&&(x<=x2)&& (y>=y1)&&(y<=y2))
                printf("Yes\n");
              else
                printf("No\n");
          }
          i++;
      }
         return 0;
     }
