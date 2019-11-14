#include <bits/stdc++.h>
#define mx 15*10005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q,a,b,k;
 int arr[mx],mn[mx];
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
          int res=0;

           cin>>n;for(int i=0;i<n;i++) cin>>arr[i];
           for(int i=n-1;i>=0;i--)
           {
              if(i==n-1) {mn[i]=arr[i];continue;}
              if(arr[i]>mn[i+1])
              {
                 mn[i]=mn[i+1];
              }
              else mn[i]=arr[i];
           }


           for(int i=0;i<n-1;i++)
           {
               if(arr[i]>mn[i+1]) res++;
           }

           cout<<res<<endl;
     }













    return 0;
}

