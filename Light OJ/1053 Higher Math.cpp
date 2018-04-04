#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
  int main()
  {
      //freopen("input.txt","r",stdin);
      long long int a,b,c,t,x,y,z,m,n,i=1;
      cin>>t;
      while(t--)
      {
      cin>>a>>b>>c;
       if(a>b &&a>c)
       {
           m=a*a;
           n=b*b+c*c;
       }
 
      else if(b>c &&b>a)
       {
           m=b*b;
           n=a*a+c*c;
       }
       if(c>b &&c>a)
       {
           m=c*c;
           n=b*b+a*a;
       }
       if(m==n)
           cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
           cout<<"Case "<<i<<": "<<"no"<<endl;
       i++;
      }
 
      return 0;
  }
 
