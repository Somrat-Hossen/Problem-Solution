#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;




int main()
 {
  int n,m;

  cin>>n>>m;

  if(n==2)
  {
    if(m==1) cout<<4<<endl;
    else cout<<5<<endl;
  }
  else if(n==4 || n==6 || n==9 || n==11)
  {

    if(m>=1 && m<=6) cout<<5<<endl;
    else cout<<6<<endl;
  }

   else
  {
    if(m>=1 && m<=5) cout<<5<<endl;
    else cout<<6<<endl;
  }
    return 0;
  }

