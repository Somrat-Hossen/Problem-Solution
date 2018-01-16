#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
typedef long long int ll;
using namespace std;
int n,i,x,y,z,j,len,cnt(0);
int arr[1000];
int dp[1000];
vector<int>vec;
stack<int>stk;
map<string,int>mp;
string str;

int check(int n)
{

}

int main()
{
 cin>>x>>y;
 if(x==y)
    {
     cout<<x<<" "<<"0"<<endl;
    }
 else if(x>y)
     {
       cout<<y<<" "<<(x-y)/2<<endl;
     }
 else if(x<y)
     {
       cout<<x<<" "<<(y-x)/2<<endl;
     }

    return 0;
}
