#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 vector<int>vec(100000);
ll sum,neww,i,n,j,pos1,pos2;

int main()
{
    cin>>n;

     for(i=0;i<n;i++)
     {
        cin>>vec[i];
        sum+=vec[i];
     }
     if(sum %3 !=0) puts("Impossible");

     else
     {
       for(i=0;i<n;i++)
       {
          neww+=vec[i];
          if(neww==(sum/3)) {puts("Yes"); pos1=i;}
         else if(neww==(sum/3*2)) /// two third of the sum
         {
            pos2=i;
         }
       }
         if(!pos1)  puts("No");
     }

     if(pos1)
     {
        for(i=0;i<n;i++)
        {
           cout<<vec[i]<<" ";
           if((i==pos1) ||(i==pos2)) cout<<endl;
        }
     }
     cout<<pos1<<pos2<<endl;


  return 0;
}

