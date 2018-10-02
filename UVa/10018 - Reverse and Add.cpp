#include <iostream>

using namespace std;
typedef long long int ll;

ll Reverse(ll x)
{
	ll nes(0);

	while (x)
	{
		//nes *= 10;
		nes=nes*10+ x % 10;
		x /= 10;
	}

	return nes;
}

int main()
{
	int tc;

	cin >>tc;

	for (int i =0;i<tc;++i)
	{
		long n;
		cin >> n;

		ll rev = Reverse(n);

		int cnt(0);
		while (rev != n)
		{
			n +=rev;
			rev = Reverse(n);
			++cnt;
		}
		cout << cnt << " " << n << endl;
	}
}
