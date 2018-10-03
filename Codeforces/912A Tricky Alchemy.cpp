#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int main()
 {
     ull n,a,b,res=0,m,c,yel,blue;
     cin>>n>>m;

        cin>>a>>b>>c;
         yel=a*2+b;
         blue=b+c*3;

     if(yel>n) res=yel-n;
     if(blue>m) res+=blue-m;

     cout<<res<<endl;



    return 0;
  }
