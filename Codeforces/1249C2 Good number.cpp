#include <bits/stdc++.h>
#define ll long long
#define mx 20005
#define lop(i,n) for(int i=1;i<=n;i++)

using namespace std;

void Solve(ll n)
{
        vector<ll>vec;
        ll tmp,cnt=0,ans=0,len;
        tmp = n;

        while(tmp)
        {
            cnt++;
            tmp/=3;
        }
        for(int i=0;i<=cnt;i++)
        {
            vec.push_back(pow(3,i));
        }

        len=vec.size();
        for(int i=0;i<len;i++)
        {
            ans+=vec[i];

        }

      // cout<<cnt<<endl;
      // cout<<ans<<endl;
      // cout<<len<<endl;
        for(int i=len-1;i>=0;i--)
        {
            if(ans-vec[i]>=n) ans -= vec[i];
        }
        cout<<ans<<endl;
}

int main()
 {
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	int q;
	ll n;

	cin>>q;

	while(q--)
   {
      cin>>n;
      Solve(n);
   }


    return 0;
  }

