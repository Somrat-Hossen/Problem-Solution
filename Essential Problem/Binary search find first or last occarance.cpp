#include <bits/stdc++.h>
#define mx 100005
typedef long long ll;
using namespace std;




int arr[mx];

int Binary_search(int x,int l,int r)
{

   int pos=-1;

     while(l<=r)
     {
        int mid=(l+r)/2;
        if(arr[mid]==x) {pos= mid;l=mid+1;}///find leftmost element
        ///if we want rightmost element then set l=mid+1;

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

	int n,item;

   cin>>n>>item;

   for(int i=0;i<n;i++) cin>>arr[i];


   sort(arr,arr+n);
   //for(int i=0;i<n;i++) cout<<arr[i];

   int position=Binary_search(item,0,n-1);
   cout<<position;


    return 0;
}

