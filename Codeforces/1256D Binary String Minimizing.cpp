#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;





int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

    ll n,i,j,m,x,y,z,q,k;

      cin>>q;

      while(q--)
      {
            cin>>n>>k;
            string str;

            ll j=0;

            cin>>str;

            for(ll i=0,len=str.size() ;i<len &&k>0 ;i++)
            {
                 if(str[i]=='0')
                 {
                    ll dis=min(k,i-j);///find the dis to place the zero
                    swap(str[i],str[i-dis]); ///swap 0 to his  possible position
                    j++;   ///keep track the last swapped pos of 0
                    k-=dis;///dec the num of swap from the total operation

                 }
            }
            cout<<str<<endl;
      }




    return 0;
}

