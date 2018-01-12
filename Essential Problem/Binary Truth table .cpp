#include <bits/stdc++.h>

using namespace std;
int main()

{
   int i,j=0,k,num,array[100],p;
   cin>>num;
   p=pow(2,num);

   for(i=0;i<p;i++)
   {
      k=1<<num-1;
      for(j=0;j<num;j++)
      {
        if(i&(k>>j))
            cout<<1;
        else
            cout<<0;
      }
      cout<<endl;
   }
   return 0;
}



