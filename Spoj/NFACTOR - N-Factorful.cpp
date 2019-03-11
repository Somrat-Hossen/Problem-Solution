#include<bits/stdc++.h>
#define mx 1000000
using namespace std;


vector<int>factor(mx+2);
int res[11][mx+2];

void Prime_factor()
{
    for(int i=2;i<=mx;i++)
    {
         if(factor[i]==0)
         {

            for(int j=i;j<=mx;j+=i)
            {
               factor[j]++;    ///Count number of prime factor of each number.
            }
         }
   }

 /* for(int i=2;i<=100;i++)
  {
    cout<<i<<": "<<factor[i]<<endl; /// Num of dif prime factor
  }*/

  for(int i=0;i<=10;i++)
  {
     for(int j=1;j<=mx;j++)
     {
        res[i][j]=res[i][j-1]+(factor[j]==i);  ///Precomputation for each n(0....10);check
     }
  }
}


int a,b,n,tc;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


  Prime_factor();///Function call

  scanf("%d",&tc);

  while(tc--)
 {
      scanf("%d%d%d",&a,&b,&n);


      if(n==0 && a==1)
      {
         printf("%d\n",1);
      }

      else if(n==0 && a>1)
      {
         printf("%d\n",0);
      }

      else
      {
        printf("%d\n",res[n][b]-res[n][a-1]);

      }
  }


  return 0;
}
