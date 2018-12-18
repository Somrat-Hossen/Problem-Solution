#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
 int tc,i,cnt,d1,d2,y1,y2;
 string m1,m2;

char ch;
string mon[13]={"A","January","February","March","April","May","June","July","August","Septembor","Octobor","Novembor","Decembor",};

map<string,int>mp;

for(i=1;i<=12;i++)
{
   mp[mon[i]]=i;
}

   cin>>tc;

   for(i=1;i<=tc;i++)
   {
        cin>> m1>> d1 >> ch >> y1;
        cin>> m2>> d2 >> ch >> y2;

        if(mp[m1]>2) y1++;
        if((mp[m2]==2 && d2<29)||(mp[m2]<2)) y2--;

        ll leap=(y2/4-y2/100+y2/400)-(y1/4-y1/100+y1/400);
        cout<<"Case "<<i<<": "<<leap<<endl;

   }



    return 0;
}



