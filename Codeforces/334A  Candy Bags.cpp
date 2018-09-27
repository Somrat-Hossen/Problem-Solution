#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

int main()
 {
     int i,j,x,y,n,m;
     cin>>n;
     x=1;y=n*n;

     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n/2;j++)
         {
             cout<<x++<<" "<<y--<<" ";
         }
         cout<<endl;
     }

    return 0;
  }

