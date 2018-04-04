#include<bits/stdc++.h>
using namespace std;
 
int main()
     {
         int t,num,dust,sum=0,i=1;
         cin>>t;
         while(t--)
         {
             sum=0;
            cin>>num;
            while(num--)
            {
                cin>>dust;
                if(dust>0)
                sum+=dust;
            }
            if(sum>=0)
            {
             cout<<"Case "<<i<<": "<<sum<<endl;
            }
            i++;
            }
 
         return 0;
     }
