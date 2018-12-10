#include <bits/stdc++.h>
#define mx 1000000
#define PI  acos(-1.0)

using namespace std;

  long  double area,h,a,b,x,y,angle;
 int tc;
 double ar[4];

int main()
 {
     cin>>tc;

    while(tc--)
    {
       y=180/PI;
        cin>>h>>area;
        x=(4*area)/(h*h);
        if(x>1) puts("-1");

        else
        {
          angle=asin(x)*y;
          angle/=2;
       // cout<<angle<<endl;
          a=h*sin(angle*PI/180);
          b=h*cos(angle*PI/180);
          ar[0]=a;
          ar[1]=b;
          ar[2]=h;
          sort(ar,ar+3);
          a=ar[0];
          b=ar[1];
          h=ar[2];
         cout<<fixed<<setprecision(6)<<a<<" "<<b<<" "<<h<<endl;

        }
     }


    return 0;
  }

