#include<bits/stdc++.h>

using namespace std;

 int i,n,w,res,weight,price,cur,m,t,x,j;
 int a[55],b[55];

int main()
{
    cin>>n>>m;
   for(j=1;j<=n;j++)
   {
       cin>>t; cur=0;
       for(i=0;i<t;i++)
       {
          cin>>w;
          if(m>w and cur==0)
          {
              b[++x]=j; res++;
              cur=1;
          }

       }
    }


    if(!res) puts("0");
    else
    {
        cout<<x<<endl;
    //sort(b,b+x);
       for(i=1;i<=x;i++)
       {
           cout<<b[i]<<" ";
       }
    }
   // cout<<res;

    return 0;
}



