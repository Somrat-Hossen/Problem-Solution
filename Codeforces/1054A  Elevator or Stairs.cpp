#include<bits/stdc++.h>
using namespace std;

long long int n,a,b,c,s,x,y,z,st,lft;
int main()
{
cin>>x>>y>>z>>a>>b>>c;

lft=abs(x-z)*b+2*c+b*abs(x-y)+c;
st=abs(x-y)*a;

cout<<((lft<=st)?"yes":"no")<<endl;

//cout<<lft<<" "<<st;



    return 0;
}

