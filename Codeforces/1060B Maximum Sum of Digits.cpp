#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int main()
 {
     ull a=0,b,res=0,x,cnt=0,i;
     ull n;
     cin>>n; x=n;

     while(n)
     {
         cnt++;
         n/=10;
     }

     for(i=1;i<cnt;i++)
     {
         a=a*10+9;
     }

     b=x-a;

     //cout<<a<<" "<<b;

     while(a)
     {
         res+=a%10;
         a/=10;
     }
     while(b)
     {
         res+=b%10;
         b/=10;
     }

     cout<<res<<endl;

    return 0;
  }
