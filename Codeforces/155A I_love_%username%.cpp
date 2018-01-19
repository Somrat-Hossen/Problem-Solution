#include <bits/stdc++.h>
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#include<iomanip>
#define PI acos(-1)
typedef long long int ll;
using namespace std;
int n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c;
int arr[1000];
int dp[1000];
int two[1000][1000];
vector<int>vec;
stack<int>stk;


int check(int n)
{

}

int main()
{
    int maxi,mini;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];

   }
 maxi=mini=arr[0];
 for(i=0;i<n;i++)
 {
     if(maxi<arr[i])
      {
         maxi=arr[i];
         cnt++;
       }
      if(mini>arr[i])
       {
         mini=arr[i];
         cnt++;
       }
   }
 cout<<cnt<<endl;

    return 0;
}
