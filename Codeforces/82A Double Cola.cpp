#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n,x,i,res;
queue<ll>q;

int main()
 {
     cin>>n;

    /* for(i=0;i<=4;i++)
     {
         q.push(i);
     }
      for(i=1;i<n;i++)
     {
       x=q.front();
       q.pop();
       q.push(x);
       q.push(x);
     }
     res=q.front();
     */

     string str[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};


     while(n>5)
     {
         n-=4;
         n/=2;
     }

     cout<<str[n-1]<<endl;

    return 0;
  }

