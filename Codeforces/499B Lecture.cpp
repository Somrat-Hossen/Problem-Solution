#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=0,i,x,res=0;
    map<string,string>mp;
    map<string,string>::iterator it;

    string str,st;
    cin>>n>>m;

    for(i=0;i<m;i++)
    {
      cin>>str>>st;
      mp[str]=(str.size()<=st.size())?str:st;
    }

    /* it=mp.begin();
    for(i=0;i<m;i++)
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }*/
    for(i=0;i<n;i++)
    {
      cin>>str;
      cout<<mp[str]<<" ";
    }

    return 0;
}


