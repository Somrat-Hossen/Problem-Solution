#include<bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)

using namespace std;

int check(int n)
{

}

int main()
{
 int n,m,cnt=0;
 cin>>n>>m;
 if(n<m)
   {
     cout<<-1<<endl;return 0;
   }
  else
  {
    if(n%2==0)
        cnt=n/2;
    else
        cnt=n/2+1;
     while(cnt%m)
      {
        cnt++;
      }
  }
  cout<<cnt<<endl;

    return 0;
}


