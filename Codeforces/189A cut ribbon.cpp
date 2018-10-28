#include <bits/stdc++.h>

using namespace std;


int n,i,x,y,z,j,a,b,c;
int dp[100000];

int MAX_CUT(int n)
{
    if(n==0) return 0;
    else if(n<0) return INT_MIN;
    else if(dp[n]!=0) return dp[n];
    else
    {
        int x=1+MAX_CUT(n-a);
        int y=1+MAX_CUT(n-b);
        int z=1+MAX_CUT(n-c);

        dp[n]=max(x,max(y,z));
        return dp[n];
    }
}
int main()
 {
   cin>>n>>a>>b>>c;
   cout<<MAX_CUT(n)<<endl;

   return 0;
 }

