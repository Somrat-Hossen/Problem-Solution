#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;
 char ch[5];

int main()
{
 int le,len,les,cnt;
    string s,st,str,ss;
    int tc,i,j;
    cin>>tc; getchar();

    for(j=1;j<=tc;j++)
    {
        cnt=0;
        ss="";str="";
        getline(cin,st);
        getline(cin,s);
        len=st.size();
        le=s.size();

        for(i=0;i<len;i++)
        {
            st[i]=tolower(st[i]);
            if(st[i]==' ')continue;
            else str+=st[i];
        }
         for(i=0;i<le;i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]==' ')continue;
            else ss+=s[i];
        }
         sort(str.begin(),str.end());
         sort(ss.begin(),ss.end());

        if(str.size()!=ss.size()) {printf("Case %d: No\n",j);}
        else
        {
            len=str.size();
            for(i=0;i<len;i++)
            {
                if(str[i]!=ss[i]) {printf("Case %d: No\n",j);cnt++;break;}
            }
            if(!cnt) {printf("Case %d: Yes\n",j);}

        }


    }
    return 0;
}

