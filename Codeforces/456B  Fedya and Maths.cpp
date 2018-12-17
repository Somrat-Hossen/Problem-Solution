#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

vector<int>divisor(mx+1,0);

 int n,i,j,m,x,y,z;

int main()
{
   string num;
   cin>>num;
   if(num.size()==1)
   {
       n=num[0]-'0';
       if(n%4==0) cout<<4<<endl;
       else cout<<0<<endl;

   }
   else
   {
      ll len=num.size();
      n=(num[len-2]-'0')*10+(num[len-1]-'0');
     // cout<<n<<endl;
      if(n%4==0) cout<<4<<endl;
      else cout<<0<<endl;

   }

    return 0;
}

