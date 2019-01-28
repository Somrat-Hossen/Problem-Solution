#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 vector<int>vec(100000,0);
ll sum,neww,i,n,j,pos;

int main()
{
    cin>>n;

     for(i=0;i<n;i++)
     {
        cin>>vec[i];
        sum+=vec[i];
     }
     if(sum & 1) puts("Impossible");

     else
     {
       for(i=0;i<n;i++)
       {
          neww+=vec[i];
          if(neww==(sum/2)) {puts("Yes"); pos=i;}
       }
         if(!pos)  puts("No");
     }

     if(pos)
     {
        for(i=0;i<n;i++)
        {
           cout<<vec[i]<<" ";
           if(i==pos) cout<<endl;
        }
     }


  return 0;
}
