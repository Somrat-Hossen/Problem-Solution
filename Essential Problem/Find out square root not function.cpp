#include<bits/stdc++.h>
//#define SQR(x) x*x
using namespace std;

  int main()
    {
      double num,lb=0,ub,mid;
      cin>>num;
      ub=num;

      while(fabs(ub-lb)>0.00000000001)
      {
          mid=(ub+lb)/2;
          if(mid*mid==num)
          {
              break;
          }
          else if(mid*mid>num)
            ub=mid;
          else
            lb=mid;
      }

      cout<<setprecision(3)<<mid<<endl;
        return 0;
    }
