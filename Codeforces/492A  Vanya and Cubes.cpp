#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
typedef long long int ll;
using namespace std;
int n,i,x,y,z,j,len,cnt=0,sum=0;
int arr[1000];
int dp[1000];
vector<int>vec;
stack<int>stk;

int check(int n)
{

}

 int main()
  {
    cin>>n;
    for(i=1;i<=n;i++)
     {
         sum+=(i*(i+1))/2;
         if(sum>n)
           {
            break;
           }
          cnt++;
    }
    cout<<cnt<<endl;
    return 0;
 }

