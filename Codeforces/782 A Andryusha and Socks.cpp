#include<bits/stdc++.h>
using namespace std;

int n,x,i,cnt=0,mx;
map<int,int>mp;
vector<int>vec(10000);

int main()
{

   cin>>n;

   for(i=1,n=n<<1;i<=n;i++)
   {
        cin>>x;

        if(mp[x]==0)
        {
             cnt++;
             mx=max(cnt,mx);
             mp[x]=1;
        }

       else
       {
           cnt--;
       }
   }

  cout<<mx<<endl;


return 0;
}
