#include <bits/stdc++.h>
#define mx 200005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q;
 ll arr[mx];
 ll frequency[mx];
 ll sum;
 string str;


int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);
	/*
	Logic: i have to count the index separately ,how many times it appears,
	the index which appear most ,then this index position contains the max num of array element.
	Second most frequency of index contains second mx num .For frequency of index use another arr
   Finally sort this two array either ascending or descending order and multiply each array element
   by its frequency arr value and gets final result.

	*/
	int l,r;
	cin>>n>>q;

	for(int i=1;i<=n;i++)
	{
	   cin>>arr[i];
	}
	for(int i=1;i<=q;i++)
   {
      cin>>l>>r;
      frequency[l]++;
      frequency[r+1]--;
   }

   for(int i=1;i<=n;i++)
   {
      frequency[i]+=frequency[i-1];///Keep track of each index's frequency
   }
   //for(int i=1;i<=n;i++) cout<<frequency[i]<<" ";

   sort(arr+1,arr+1+n);
   sort(frequency+1,frequency+1+n);///either ascending or descending order
   for(int i=1;i<=n;i++)
   {
      sum+=(arr[i]*frequency[i]);///multiply each frequency of index by its corresponding mx number
   }

   cout<<sum<<endl;

    return 0;
}

