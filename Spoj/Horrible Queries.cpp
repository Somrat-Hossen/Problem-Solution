#include<bits/stdc++.h>
#define mx 100005
using namespace std;
typedef long long ll;

ll n;
ll arr[mx];

struct data
{
   ll sum,prop;
}tree[4*mx];

void built(ll node, ll l,ll r)
{
   if(l==r)
   {
      tree[node].sum=arr[l]; /// l and r is equal
      return ;
   }

   ll left_node=2*node;
   ll right_node=2*node+1;
   ll mid=(l+r)/2;

   built(left_node,l,mid);
   built(right_node,mid+1,r);

  tree[node].sum=tree[left_node].sum+tree[right_node].sum;
}

ll query(ll node,ll l,ll r,ll i,ll j,ll carry=0)  /// l and r are the current node[4-6]sum   i,j are the range where,s sum needed
{
   if(i>r || j<l) return 0; /// out of cur node
   ///between the interval
   if(l>=i && r<=j) return tree[node].sum+carry*(r-l+1);

  ll left_node=2*node;
  ll right_node=2*node+1;
  ll mid=(l+r)/2;

  ll a=query(left_node,l,mid,i,j,carry+tree[node].prop); ///contains the propagate value
  ll b=query(right_node,mid+1,r,i,j,carry+tree[node].prop);

  return (a+b);

}

void update(ll node,ll l, ll r, ll i,ll j, ll val)
{
     if(i>r || j<l) return;   ///out of boundary
     if((l>=i) and r<=j )///same as l==r
     {
        tree[node].sum+=(r-l+1)*val; ///r-l+1 means total child of the node
        tree[node].prop+=val; ///update the propagate value each time
     }
   else
   {
     ll left_node=2*node;
     ll right_node=2*node+1;
     ll mid=(l+r)/2;
     update(left_node,l,mid,i,j,val);
     update(right_node,mid+1,r,i,j,val);

     tree[node].sum=tree[left_node].sum+tree[right_node].sum+(r-l+1)*tree[node].prop; ///add the total propagate value of this node
    }

}

void Clear()
{
   for(ll i=1;i<=mx;i++) arr[i]=0;
   for(ll i=1;i<=4*mx;i++) {tree[i].sum=0;tree[i].prop=0;}
}


int main()
{
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

    ll tc,n,q,operation,l,r,val;

    scanf("%lld",&tc);

    while(tc--)
    {
         scanf("%lld %lld",&n,&q);
         built(1,1,n);

         while(q--)
         {
            scanf("%lld",&operation);
            if( !operation )
            {
                scanf("%lld %lld %lld",&l,&r,&val);
                update(1,1,n,l,r,val);
            }
            else
            {
               scanf("%lld %lld",&l,&r);

               printf("%lld\n",query(1,1,n,l,r,0));
            }
         }

          Clear();
    }


  return 0;
}


