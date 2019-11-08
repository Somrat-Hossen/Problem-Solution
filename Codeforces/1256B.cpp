#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z;


int arr[105];

int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	int a,b,c,d,q;

	  cin>>q;

	  while(q--)
     {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
           cin>>arr[i];
        }


          int tmp=n-1,need=1,cnt=0;
          int vis[105]={0};

          for(int i=1;i<=n && cnt<tmp;i++)
          {
             for(int j=1;j<=n && cnt<tmp;j++)
             {
                if(arr[j]==need)
                {
                    int k=j;
                     while( (arr[k]<arr[k-1]) && (k>1) && (cnt<tmp) && (vis[k-1]==0))
                     {
                        swap(arr[k],arr[k-1]);
                        vis[k-1]=1;
                        cnt++;
                        k--;
                     }
                     need++;
                }
             }
          }

          for(int i=1;i<=n;i++) cout<<arr[i]<<" ";cout<<endl;
     }

    return 0;
}

