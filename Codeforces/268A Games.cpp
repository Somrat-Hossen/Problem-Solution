#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int main()
 {
     int away[35],home[35];
     int n,i,cnt=0,j;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>home[i]>>away[i];
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(home[i]==away[j])
             {
                 cnt++;
             }
         }
     }
     cout<<cnt<<endl;


    return 0;
  }

