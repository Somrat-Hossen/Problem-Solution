#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int i,n,m,j,x,sum=0;

set<ll>st;
set<ll>::iterator it;

int main()
{


cin>>n>>m;

 for(;i<n;i++)
 {
   cin>>x;
   st.insert(x);

 }
 while(m--)
 {
   if(st.empty()) puts("0");
   else
   {
      it=st.begin();
      cout<<(*it-sum)<<endl;
      sum+=*it-sum;
      st.erase(it);
   }

 }


 return 0;
}
