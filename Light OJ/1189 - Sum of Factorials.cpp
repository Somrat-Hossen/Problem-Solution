#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long  ull;
typedef  long long ll;

ull fact[25];
ll n;
int tc,i,cnt,cases,j;
vector<ll> vec;
int main()
{

  fact[0]=fact[1]=1;

   for(i=2;i<=20;i++)
   {
     fact[i]=fact[i-1]*i;

   }

     cin>>tc;

     for(cases=1;cases<=tc;cases++)
     {
       scanf("%lld",&n);
      // cin>>n;
       j=0; cnt=0;
        vec.clear();
       cout<<"Case "<<cases<<": ";

       for(i=20;i>=0;i--)
       {
         if((fact[i])<=n)
         {
           n=n-fact[i];
           vec.push_back(i);
         }
       }

       if(n==0)
       {
         for(i=vec.size()-1;i>=0;i--)
         {
           cout<<vec[i]<<"!";
           if(j!=vec.size()-1) printf("+");
           j++;
         }
       }

       else
       {
         printf("impossible");
       }
       printf("\n");
     }


 return 0;
}
