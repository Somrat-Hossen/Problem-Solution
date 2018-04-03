#include <bits/stdc++.h>
using namespace std;
#define MAX 20000005
typedef long long int ll;
int m=0;
int arr[MAX+5];
bool prime[MAX+5];
void Sieve()
{

    memset(prime, true, sizeof(prime));
    for(int p=3; p*p<=MAX; p+=2)
     {
        if (prime[p]==true)
        {
          for(int i=p*2;i<=MAX;i+=p)
          prime[i]=false;
         }
     }

    for (int p=3; p<=MAX; p+=2)
    {
      if (prime[p] and prime[p+2])
      {
       arr[++m]=p;
      }
    }
}


int main()
{
    int x ;
     Sieve();
     while(scanf("%d",&x)==1)
     {
       printf("(%d, %d)\n",arr[x],arr[x]+2);
     }

    return 0;

}

