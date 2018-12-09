#include <bits/stdc++.h>
#define mx 10000


using namespace std;

typedef  long long int ll;

ll num,sq,x,i,j,cnt,len,p,tc;
bool check[mx+1];
vector<ll> prime;
set<int> st;
vector<int>lucky;

void prime_test()
{
  prime.push_back(2);
   p=sqrt(mx)+1;

 for(i=4;i<=mx;i+=2)///All even except 3 are marked.
  {
     check[i]=1;
  }
    for(int i=3;i<=mx;i+=2)///same sqrt(n)==i*i
    {
      if(check[i]==0)
      {
          prime.push_back(i); ///i means prime
          if(i<=p)  ///there is no divisor after sqrt n
          {
            for(int j=i*2;j<=mx;j+=i)
           {
              check[j]=1; ///0 means not prime
           }
          }
      }
    }
}
void lucky_prime()
{
   for(i=30;i<=mx;i++)
   {
     ll tmp=i;st.clear();
      for(j=0;prime[j]*prime[j]<=i;j++)
       {
       if(tmp%prime[j]==0)
       {
          st.insert(prime[j]);
       }
        while(tmp%prime[j]==0 && tmp)
        {
         // div.push_back(prime[i]);
          tmp/=prime[j];
        }
       }
       if(tmp>2)  st.insert(tmp);
     if(st.size()>=3) lucky.push_back(i);
     if(lucky.size()>1000) break;

   }
}






int main()
{
  prime_test();
  lucky_prime();

  /*for(i=0;i<50;i++)
  {
    cout<<prime[i]<<" ";
  }

  for(i=0;i<lucky.size();i++)
  {
     cout<<lucky[i]<<" ";
  }

 cout<<lucky.size()<<endl;*/
  cin>>tc;
 while(tc--)
{
   cin>>num;
   cout<<lucky[num-1]<<endl;

}


    return 0;
}
