#include <bits/stdc++.h>
#define mx 1000000
#include<vector>

using namespace std;

vector<int>divisor(mx+2);
int mark[mx+2];

 int n,i,j,m,tc;

int main()
 {
     for(i=1;i<=mx;i++)
     {
         for(j=i;j<=mx;j+=i)
         {
             (divisor[j])++;
         }
     }
    mark[1]=1;

    for(i=2;i<=mx;i++)
    {
      if(divisor[i]>=divisor[i-1])
      {
          mark[i]=i;
      }
      else
        {
           mark[i]=mark[i-1];
           divisor[i]=divisor[i-1];
        }
    }

     cin>>tc;
     while(tc--)
     {
        cin>>m;
        cout<<mark[m]<<endl;
     }



// for(i=1;i<=m;i++)
// {
//     cout<<divisor[i]<<" ";
// }


    return 0;
  }
