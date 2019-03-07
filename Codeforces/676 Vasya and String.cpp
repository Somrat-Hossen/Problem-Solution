#include<bits/stdc++.h>
using namespace std;

int a,b,res,cnt,i,n,m;
string str;

int main()
{

 cin>>n>>m>>str;

 for(i=0;i<n;i++)
 {
    (str[i]=='a')?a++:b++;
    if(min(a,b)<=m) res=max(res,a+b);///Always we count with respect to large consecutive str

    else
    {

       (str[cnt++]=='a')?a--:b--; /// remove first char and take from last [aabbbbbabb]
    }
 }

 cout<<res<<endl;


  return 0;
}
