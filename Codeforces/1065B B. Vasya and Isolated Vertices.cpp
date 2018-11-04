#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m,n,res,mn,mx,i;

int main()
 {
     cin>>n>>m;
     if(m==0) {cout<<n<<" "<<n<<endl; return 0;}

    mn=(2*m>=n)?0:n-2*m;  /// one edge connect two node.

    for( i=1;i<=n;i++)
    {
        if((i*(i-1))/2>=m) break;
    }
    cout<<mn<<" "<<n-i<<endl;



    return 0;
  }
