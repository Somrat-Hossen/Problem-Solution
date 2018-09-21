#include<bits/stdc++.h>

using namespace std;

 int i,n,w,res,weight,price,cur,m,t,x,j;
 int a[55],b[55];

int main()
{
   // freopen("in.txt","r",stdin);
    cin>>n;
    string st,s,str;
    map<string ,int>mp;
    map<string ,int>::iterator it;

 if(n==1)
    {
        cin>>st;
        cout<<st;
    }
else {
     for(j=1;j<=n;j++)
     {

       cin>>st;
        mp[st]++;
        if(j==1)
        {
          s=st;
        }
        else if(j!=1 && s!=st)
        {
           str=st; res++;
        }
     }

     cout<<(((n-res)<res)? str:s)<<endl;
}
    return 0;
}




