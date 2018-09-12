#include<bits/stdc++.h>

using namespace std;

  int main()
     {
         //freopen("in.txt","r",stdin);
         string str,st;
         cin>>str>>st;

         cout<<str[0];

         for(int i=1;i<str.size();i++)
         {
         if(str[i]<st[0])
           cout<<str[i];
           else break;
         }
         cout<<st[0];

         return 0;
     }
