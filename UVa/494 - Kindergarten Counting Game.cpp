#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int check(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='A' && ch<='z')) return 1;
    else return 0;
}
int main()
 {
     string st;
     int cnt=0;

 while(getline(cin,st))
 {
         cnt=0;
     for(int i=0,len=st.size();i<len;)
      {
         int c=check(st[i]);
         if(c)
         {
             while(check(st[i])==1)
             {
                 i++;
             }
             cnt++;i++;
         }
         else i++;
      }
     cout<<cnt<<endl;
  }


    return 0;
  }

