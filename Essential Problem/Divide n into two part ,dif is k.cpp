/// Devide n into two part so that the difference between them is k.
/// if not possible print impossible.

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,res,a,b,x,y,c,tmp;
  puts("Enter n and k:");


  while(cin>>n>>k)
  {
      if(n%2==0 && k%2==0)
      {
          a=n/2-k/2;
          b=n/2+k/2;
        cout<<a<<" "<<b<<endl;
      }
      else if(n%2==1 && k%2==1)
      {
         a=n/2;
         b=n/2;
         x=k/2;
         y=k-x;
         a-=x;
         b+=y;
        cout<<a<<" "<<b<<endl;
      }
      else puts("Not possible!!!");

  }

  return 0;
}
