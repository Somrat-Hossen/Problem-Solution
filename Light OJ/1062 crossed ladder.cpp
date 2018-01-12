#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
  int main()
   {
      double x,y,c,w,mid,lb,ub;
      int i=0,t;
      cin>>t;

       while(t--)
       {
      cin>>x>>y>>c;
      lb=0; ub=min(x,y);
 
      while(fabs(ub-lb)>0.000000000001)
        {
          mid=(lb+ub)/2;
          if((1.0/sqrt((y*y)-(mid*mid)))+(1.0/sqrt((x*x)-(mid*mid)))==(1.0/c)) 
          {
            break;
          }
 
          else if((1.0/sqrt((y*y)-(mid*mid)))+(1.0/sqrt((x*x)-(mid*mid)))>(1.0/c))
          {
            ub=mid;
          }
 
            else
                lb=mid;
      }
       cout<<"Case "<<++i<<": "<<setprecision(10)<<mid<<endl;
     }
 
       return 0;
   }
