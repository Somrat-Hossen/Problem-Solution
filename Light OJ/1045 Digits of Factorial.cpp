#include<bits/stdc++.h>
#define max 1000005
double arr[max];
using namespace std;
 
int main()
  {
  long long int final;
  int k=1,t,n,base,i;
 
   for(i=1;i<=max-5;i++)
   {
       arr[i]=arr[i-1]+log(i);
   }
 
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d%d",&n,&base);
       final=(arr[n]/log(base))+1;
       printf("Case %d: %lld\n",k++,final);
   }
 
       return 0;
   }
