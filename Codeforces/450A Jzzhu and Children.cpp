#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

typedef unsigned int ui;
typedef unsigned long long int ull;

int main()
 {
   int i,n,m,x,y;
   queue<int>value;
   queue<int> index;
   cin>>n>>m;

   for(i=1;i<=n;i++)
   {
     cin>>x;
      value.push(x);
      index.push(i);
   }

   while(value.size()!=1)
   {
      x=value.front();
      y=index.front();
      if(x<=m)
      {
        value.pop();
        index.pop();
      }
      else
      {
        value.push(x-m);
        index.push(y);
        value.pop();
        index.pop();

      }
   }

   cout<<index.front()<<endl;




    return 0;
  }

