#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
 {
     string str;
     int len,x,y;
  getline(cin,str);
  len=str.size();
  for(int i=0;i<len;i++)
   {
    x=str[i]-'0';
    y=9-x;
    if(i==0 && y==0)
        cout<<x;
    else
        cout<<min(x,y);
    }
        return 0;
  }

