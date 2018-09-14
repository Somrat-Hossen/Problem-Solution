#include<bits/stdc++.h>
using namespace std;
int n,i,x,c;
int main()
{
    int l,r;
	cin>>n;
	for(i=1;i<=n;i++)
    {
		cin>>x;
		if(x==1) l=i;
		if(x==n) r=i;
	}
	l=max(l-1,n-l);
	r=max(r-1,n-r);
	cout<<max(l,r)<<endl;

	return 0;
}
