#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=0,i,x,res=0;

    string str,st;
    cin>>n>>m>>str;
    int a[m+1];
    memset(a,0,sizeof(a));

    for(i=0;i<n;i++)
    {
      a[str[i]-'A']++;
    }
    sort(a,a+m);


    /*for(i=0;i<m;i++)
    {

      cout<<str[i]<<"="<<a[i]<<" "<<endl;
    }*/
    cout<<m*a[0]<<endl;

    return 0;
}



