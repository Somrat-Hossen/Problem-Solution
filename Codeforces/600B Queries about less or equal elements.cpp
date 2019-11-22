#include <bits/stdc++.h>
#define mx 200005
typedef long long ll;
using namespace std;




 int arr[mx],ar[mx];

int Binary_search(int x,int l,int r)
{

   int pos=0;

     while(l<=r)
     {
        int mid=(l+r)/2;
        if(arr[mid]<=x) {pos= mid;l=mid+1;}///find rightmost element
        ///if we want leftmost element then set r=mid-1;

        else if(arr[mid]>x) r=mid-1;
        else l=mid+1;
     }
     return pos;
}

int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	int n,m;


   cin>>n>>m;
   for(int i=1;i<=n;i++) {cin>>arr[i];}
   for(int i=1;i<=m;i++) cin>>ar[i];

   sort(arr+1,arr+1+n);

   for(int i=1;i<=m;i++)
   {
      cout<<Binary_search(ar[i],1,n)<<" ";
   }









    return 0;
}

