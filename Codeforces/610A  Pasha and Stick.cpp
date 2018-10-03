#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int main()
 {
     ull n,a,b,res=0,m,c,sum=0;
     cin>>n>>m;
     sum=n+m;


         cin>>a>>b>>c;
         res+=a*2+b*2+c*3;


   //  cout<<res<<" "<<sum<<endl;

    if((res-sum)>0) cout<<(res-sum)<<endl;

    else cout<<0<<endl;

    return 0;
  }

