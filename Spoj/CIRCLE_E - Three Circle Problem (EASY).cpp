#include <bits/stdc++.h>
using namespace std;

double r1,r2,r3,mid,s,lb,ub,s1,s2,s3,p,area;


double Area_cal( double a, double b, double c)
{
   p = (a + b + c)/2;
   return sqrt(p*(p-a )*(p-b )*(p-c)) ;
}


void Compute( )
{
    area = Area_cal( r1 + r2, r2 + r3, r3 + r1);
    lb = 0;
    ub =min(r1,min(r2,r3));

 while( fabs(ub-lb)> 0.0000001 )
 {
     mid = (lb + ub) / 2;
    s1 = Area_cal( mid + r1, mid + r2, r1 + r2);
     s2 = Area_cal( mid + r1, mid + r3, r1 + r3);
     s3 = Area_cal( mid + r2, mid + r3, r2 + r3);

    if((s1+s2+s3) == s)
    {
       break;
    }

    else if((s1+s2+s3)< area)
    {
       lb = mid;
    }

    else
    {
       ub = mid;
    }

 }
  cout<<fixed<<setprecision(6)<<mid<<endl;
  return ;
}

int main( )
{
    int t;
    scanf( "%d",&t);

    while( t--)
    {
         cin>>r1>>r2>>r3;
         Compute();
    }

  return 0;
}
