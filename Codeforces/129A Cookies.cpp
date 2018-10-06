#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

 int a[105],n,cnt,res,i;
int main()
 {
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         res+=a[i];
     }
     if(res & 1)
     {
       for(i=0;i<n;i++)
       {
         if(a[i]%2==1) cnt++;
       }
     }
     else
        {
       for(i=0;i<n;i++)
       {
         if(a[i]%2==0) cnt++;
       }
     }

     cout<<cnt<<endl;



    return 0;
  }

