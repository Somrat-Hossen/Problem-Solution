#include <bits/stdc++.h>
#define mx 131075///2^17
typedef long long ll;
using namespace std;


 int arr[mx],tree[4*mx];

void Built(int node,int l,int r,int depth) ///depth for the operation to do
{
   if(l==r){tree[node]=arr[l];cout<<depth<<" ";return;}

   int mid=(l+r)/2;

   Built(2*node,l,mid,depth+1);
   Built(2*node+1,mid+1,r,depth+1);

    if((depth & 1)==0) tree[node]=tree[2*node] | tree[2*node+1];
    else  tree[node]=tree[2*node] ^ tree[2*node+1];
}


void Update(int node,int l,int r,int pos,int val,int depth)
{
    if(pos>r ||l>pos) return;
    if(l==r) {tree[node]=val;return;}

    int mid=(l+r)/2;

   Update(2*node,l,mid,pos,val,depth+1);
   Update(2*node+1,mid+1,r,pos,val,depth+1);

  if((depth & 1 )==0)tree[node]=tree[2*node] | tree[2*node+1];
   else tree[node]=tree[2*node] ^ tree[2*node+1];

}


int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	int n,m,pos,val;
	cin>>n>>m;
	n=1<<n;

	for(int i=1 ;i<=n;i++) cin>>arr[i];


	if(n==2)
   {
      while(m--)
      {
         cin>>pos>>val;
         arr[pos]=val;
         cout<<(arr[1]| arr[2])<<endl;

      }

      return 0;
   }
	Built(1,1,n,((int)log2(n)%2==0));///We get depth from log2(n) .Then check whether is even or odd.if even pass 1,else 0

    while(m--)
    {
         cin>>pos>>val;

        Update(1,1,n,pos,val, ((int)log2(n)%2==0) );

        cout<<tree[1]<<endl;
    }



    return 0;
}
