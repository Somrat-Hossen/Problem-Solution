#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>
#define max 1000000
using namespace std;
int prime[max+1];
int arr[max+1],m=0;

void sieve()
{
  int i;
  arr[0]=1;arr[1]=1;

 for(i=2;i*i<=max;i++)
  {
    if(arr[i]==0)
     {
      for(int j=2*i;j<=max;j+=i)
       {
         arr[j]=1;
       }
     }
  }
  arr[2]=1;/// 2 is not odd prime
}

int main()
 {
     sieve();
     int tc,n,x,y,cnt;
   while(scanf("%d",&n)==1 && n)
   {
     cnt=0;
     for(int i=3;i<n;i++)
     {
        x=i;
        y=n-i;
        if(arr[x]==0 && arr[y]==0)
        {
         printf("%d = %d + %d\n",n,x,y);
         cnt++;
         break;
        }
     }
    if(!cnt)
      printf("Goldbach's conjecture is wrong.\n");
   }


    return 0;
}

