#include <bits/stdc++.h>
#define ll long long
#define mx 20005
#define lop(i,n) for(int i=1;i<=n;i++)

using namespace std;

void Solve(ll num)
{
    ll cnt=0,tmp=num,res=1;
    vector<ll>vec;
    vec.push_back(1);

    while(tmp)
    {
       cnt++;
       tmp/=3;
       res+= pow(3,cnt);
       vec.push_back(pow(3,cnt));
    }

    res+=pow(3,cnt+1);
    vec.push_back(pow(3,cnt+1));

    int len=vec.size();

    for(int i=len-1;i>=0;i--)
    {
       if(res-vec[i]>=num)
       {
          res-=vec[i];
       }
    }
    cout<<res<<endl;
}

int main()
 {
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	int q,tmp;
	ll n;

	cin>>q;

	while(q--)
   {
      cin>>n;
      Solve(n);
   }


    return 0;
  }
