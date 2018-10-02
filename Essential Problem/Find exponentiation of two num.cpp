#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;
int power(int a,int b)
{
    int x;
    if(b==0) return 1;
    else {
         x=power(a,b/2);
        x*=x;
        if(b&1) x*=a;
    }
    return x;
}
int main()
 {

     int a,b;
     cin>>a>>b;
     cout<<power(a,b)<<endl;

    return 0;
  }

