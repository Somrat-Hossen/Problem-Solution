#include <bits/stdc++.h>
#define mx 200005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q;
 int arr[mx];
 int neww[mx];
 ll sum,res;
 string str;


int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	cin>>n;

	for(int i=1;i<=n;i++)
   {
      cin>>arr[i];
      sum+=arr[i];
      neww[i]=arr[i];///copy to the neww array
   }
   sort(neww+1,neww+1+n);
   int firstmx,secondmx;

   firstmx=neww[n],secondmx=neww[n-1];///we need just first or second maximum

   for(int i=1;i<=n;i++)
   {
      ll current=arr[i],large=firstmx;
      if(current==neww[n]) large=secondmx;

      if( (sum- (current+large ))==large) res++,neww[res]=i;
   }
   cout<<res<<endl;
   for(int i=1;i<=res;i++) cout<<neww[i]<<" ";cout<<endl;


    return 0;
}
