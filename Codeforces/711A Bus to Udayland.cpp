#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	string str, s;

    cin>>n;
    while(n--)
    {
      cin>>s; str+=s;
      str+='\n';
    }
	int pos= str.find("OO");
	if(pos>=0)
	{
        str.replace(pos,2,"++");
        cout<<"YES\n"<<str;
	}
	else cout<<"NO";
	//cout<<endl<<str;
	return 0;
}
