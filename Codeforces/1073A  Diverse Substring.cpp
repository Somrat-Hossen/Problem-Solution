#include<bits/stdc++.h>
using namespace std;
 int n,i;
int main()
{
    string s;

	for(cin>>n>>s; i<n ;++i)
    {
        if(s[0]!=s[i])
         {
            cout<<"YES\n"<<s[0]<<s[i];return 0;
         }
    }
	cout<<"NO";
}
