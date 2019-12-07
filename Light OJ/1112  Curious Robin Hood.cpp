#include<bits/stdc++.h>
#define mx 100005
using namespace std;
typedef long long ll;

int n;
int arr[mx];
ll tree[4*mx];

void built(int node, int l,int r)
{
   if(l==r)
   {
      tree[node]=arr[l]; /// l and r is equal
      return ;
   }

   int left_node=2*node;
   int right_node=2*node+1;
   int mid=(l+r)/2;

   built(left_node,l,mid);
   built(right_node,mid+1,r);

  tree[node]=tree[left_node]+tree[right_node];
}

ll query(int node,int l,int r,int i,int j)  /// l and r are the current node[4-6]sum   i,j are the range where,s sum needed
{
   if(i>r || j<l) return 0; /// out of cur node
   if(l>=i && r<=j) return tree[node];

  int left_node=2*node;
  int right_node=2*node+1;
  int mid=(l+r)/2;

  ll a=query(left_node,l,mid,i,j);
  ll b=query(right_node,mid+1,r,i,j);

  return (a+b);

}

void update(int node,int l, int r, int pos, int val,int type)
{
     if(pos>r || pos<l) return;   ///out of boundary

     if((l>=pos) and r<=pos )///l==r
     {
        if(type==1)
        {
             printf("%lld\n",tree[node]);
           tree[node]=val;
        }
        else
        {
           tree[node]=tree[node]+val;
           //cout<<tree[node]<<endl;
        }
     }
   else
   {
        int left_node=2*node;
        int right_node=2*node+1;
        int mid=(l+r)/2;

        update(left_node,l,mid,pos,val,type);
        update(right_node,mid+1,r,pos,val,type);

        tree[node]=tree[left_node]+tree[right_node];
    }
}


int main()
{
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

  int n,q,tc,l,r,type,pos,val;

  scanf("%d",&tc);

  for(int cs=1;cs<=tc;cs++)
  {
     scanf("%d %d",&n,&q);

     for(int i=1;i<=n;i++) scanf("%d",&arr[i]);;
     built(1,1,n);

     printf("Case %d:\n",cs);

     while(q--)
     {
        scanf("%d",&type);
        if(type==1)
        {
           scanf("%d",&pos);
           pos++;///since input is 0 based
           update(1,1,n,pos,0,type);
        }

       else if(type==2)
        {
            scanf("%d %d",&pos,&val);
           pos++;///since input is 0 based
           update(1,1,n,pos,val,type);
        }

        else
        {
            scanf("%d %d",&l,&r);
           l++;r++;
           printf("%lld\n",query(1,1,n,l,r));
        }
     }
   ///  for(int cl=1;cl<=4*n;cl++) tree[cl]=0;
    /// for(int i=1;i<=n;i++) arr[i]=0;
  }




  return 0;
}

