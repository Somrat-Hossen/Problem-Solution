#include <bits/stdc++.h>
#define mx 1000000

using namespace std;

typedef  long long int ll;
vector<int>vec;
int cnt,i,j,x;

void count_divisor()
{
  for(i=1;i<=mx;i+=2)
  {
    cnt=0;
    for(j=1;j*j<=i;j++)
    {
       if(i%j==0)
       {
          if(j*j==i) cnt++;
          else cnt+=2;
       }
    }
    vec.push_back(cnt);
   //cout<<cnt<<" ";
  }
}

int main()
 {
  count_divisor();

  for(i=0;i<50;i++)
  {
    cout<<vec[i]<<" ";
  }

    return 0;
  }

