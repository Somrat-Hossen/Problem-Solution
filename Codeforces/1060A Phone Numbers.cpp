#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 int arr[11],n,i,x,y,z,len;
 string str;

int main()
 {
     set<int>st;
     cin>>n;
     cin>>str;


     for(i=0;i<n;i++)
     {
        x=str[i]-'0';
       arr[x]++;
       st.insert(x);
     }
     if(arr[8]==0 || n<11 ) {puts("0");}

     else if(st.size()==1 and arr[8]) cout<<((arr[8])/11)<<endl;

     else
     {
         x=n/11;

         if(arr[8]>=x)
         {
             cout<<x<<endl;
         }
         else
            cout<<arr[8]<<endl;

     }



    return 0;
  }

