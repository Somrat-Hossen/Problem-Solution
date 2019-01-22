#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,cnt;

int main()
{
	cin>>s;
	for(i=0;i<s.size();i++)
	{
	    while(s[i]==s[i+1] && s.size())
	    {
	        s.erase(i,2);
	        i--;
	        cnt++;
	    }
	}
	cout<<(cnt%2?"YES":"NO");
}
