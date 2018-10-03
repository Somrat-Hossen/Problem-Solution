#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int main()
 {
     ull n,a,b,res;
     cin>>n;
     if(n&1 || n<6){ puts("0"); return 0; }

    n/=2;
    a=n/2+1;b=n-1;

    res=(b-a)+1;

    cout<<res<<endl;

    return 0;
  }
