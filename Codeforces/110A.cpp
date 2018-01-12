#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int cnt=0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
         cnt++;
        }
    }

    if(cnt==4 || cnt==7 || cnt==47 || cnt==74 || cnt==474 || cnt==747 || cnt==447 || cnt==744 || cnt==774 || cnt==447 || cnt==477)
    {
     cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
