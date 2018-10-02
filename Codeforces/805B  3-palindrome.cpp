#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;
int n,i,j,x;
int main()
 {

     cin>>n;
     if(n&1) {cout<<"a";x=1;}

     for(i=1;i<=n;i++)
     {
         for(j=1;j<=2 && x<n;j++)
         {
             cout<<"b"; x++;
         }


         for(j=1;j<=2 && x<n;j++)
         {
             cout<<"a";x++;
         }


         if(x==n) break;


     }
    return 0;
  }

