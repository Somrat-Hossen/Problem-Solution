#include <bits/stdc++.h>
#define mx 1000000
#define N 300000
#define M 15000000
typedef long long ll;

using namespace std;


int arr[N+2],i,cnt,n;
vector<int>prime;
int Mark[mx+2];

int Count[M+2];
int result;
int g;

void Sieve_prime()
{
  for(int i=4;i<=mx;i+=2) Mark[i]=1;
  for(int i=3;i*i<=mx;i+=2)
  {
    if(Mark[i]==0)
    {
       for(int j=i*i;j<=mx;j+=i*2)   /// prime number upto 10^6
       {
          Mark[j]=1;
       }
    }
  }
  for(int i=2;i<=mx;i++)
  {
     if(Mark[i]==0) prime.push_back(i);  /// Store all prime upto mx
  }

 /// for(int i=0;i<100;i++) cout<<prime[i]<<" ";
}

void Prime_factor(int x)
{

     for(int j=0;prime[j]*prime[j]<=x;j++)
     {
        if(x%prime[j]==0)
        {
            while(x%prime[j]==0)
             {
                x=x/prime[j];           /// Prime factorization of each num
             }

             Count[prime[j]]++;                   ///Count the number of prime factor .Count single time for a particular num
             result=max(result,Count[prime[j]]);  /// Highest num of prime factor counted from the list
         }
     }
     if(x>1)   /// if x is prime
     {
         Count[x]++;
         result=max(result,Count[x]);

     }

}


int main()
{

    ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

  Sieve_prime();   /// for prime function

    cin>>n;
    cin>>g;
    arr[0]=g;

    for(i=1;i<n;i++)
    {
      cin>>arr[i] ;
      g=__gcd(g,arr[i]); ///make gcd of all num
    }

    //cout<<g<<endl;
   for(i=0;i<n;i++)
   {
      Prime_factor(arr[i]/g);
   }

   cout<<((!result)? -1:n-result)<<endl;


    return 0;
  }

