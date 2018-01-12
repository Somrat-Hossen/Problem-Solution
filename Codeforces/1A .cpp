#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("int.txt","r",stdin);
    string str;
    int lc=0,rc=0,uc=0,dc=0,i,n;
    cin>>n;
    cin>>str;
   for(i=0;i<n;i++)
   {
       if(str[i]=='U')uc++;
       if(str[i]=='D')dc++;
       if(str[i]=='L')lc++;
        if(str[i]=='R')rc++;
   }

   cout<<2*(min(uc,dc))+ 2*(min(lc,rc))<<endl;


    return 0;
}
