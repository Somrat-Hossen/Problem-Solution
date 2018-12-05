#include<bits/stdc++.h>
using namespace std;

int R,r,x,y,z,d,res,n;
int main()
{
double dis;
 cin>>R>>d>>n;

 while(n--)
 {
    cin>>x>>y>>r;

    dis=(x*x)+(y*y);
    dis=sqrt(dis);

    if(dis>=(R-d+r) && (dis+r<=R))
    {
        res++;
    }
 }
   cout<<res<<endl;

 return 0;
}
