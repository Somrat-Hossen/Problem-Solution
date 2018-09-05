#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0,res=0,x,y,len,i;
    string str;
    cin>>str;
    len=str.size();
    for(i=0;i<len;i++)
    {
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u' && str[i]!='n')
        {
            cnt++;
        }
    }
    for(i=0;i<len;i++)
    {
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u' && str[i]!='n')
        {
           if(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u') res++;
        }
    }


    cout<<((res==cnt)?"yes":"no")<<endl;
    return 0;
}

