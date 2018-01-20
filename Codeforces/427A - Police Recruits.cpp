#include <bits/stdc++.h>
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#include<iomanip>
#define PI acos(-1)
typedef long long int ll;
using namespace std;
int n,i,x,y,z,j,len,cnt=0,sum=0,a,b,c,temp,res=0;
int arr[1000];
int dp[1000];
int two[1000][1000];
vector<int>vec;
stack<int>stk;
string str,st;


int check(int n)
{

}

int main()
{
 sum=res=0;
 cin>>n;
 for(i=1;i<=n;i++)
 {
     cin>>x;
   if(x>0)
     {
      sum+=x;
     }
   else if(x<0)
    {
    res+=x;
    }
     a=sum+res;//when res=- then have assign + sign else be wrong.
     if(a<0)
     {
     cnt+=abs(a);
     sum=0;res=0;
     }
 }
 cout<<cnt<<endl;
    return 0;
}

