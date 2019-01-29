#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;





int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cerr.tie(NULL);

    ll gcd=1,lcm=1,y,i,m=1;

  for(i=1;i<=20;i++)
  {
          lcm=(i*lcm)/(__gcd(i,lcm));
  }
  cout<<lcm;

    return 0;
}

