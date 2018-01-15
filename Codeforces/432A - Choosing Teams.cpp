#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
typedef long long int ll;
using namespace std;

int n,i,x,y,z,j,len,cnt;
int arr[1000];
int dp[1000];
vector<int>vec;
stack<int>stk;

int check(int n)
{

}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],x,cnt=0;
    for(int i=0;i<n;i++)
     {
        cin>>x;
        arr[i]=x+k;
     }

    for(int i=0;i<n;i++)
     {
       if(arr[i]<=5)cnt++;
     }

    cout<<cnt/3<<endl;

    return 0;
}

