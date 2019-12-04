#include <bits/stdc++.h>
#define mx 200005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q;
 int arr[mx];
 ll csum[mx];
 string str;


int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	cin>>q;
	while(q--)
   {
      cin>>n>>m;
     ll sum=0;
      for(int i=0;i<n;i++) cin>>arr[i],sum+=arr[i];
      if( (n==2) || m<n) cout<<-1<<endl;
      else
      {
         cout<<(sum*2)<<endl;

         int i=1,j=2;
         for(int k=1;k<m;k++)
         {
            cout<<i<<" "<<j<<endl;
            i++,j++;
         }
         cout<<1<<" "<<m<<endl;

      }

   }


    return 0;
}

