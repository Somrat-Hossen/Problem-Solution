#include<bits/stdc++.h>
#define maxx 1000000000
#define mx 100000  ///we need to find prime upto sqrt b
using namespace std;
typedef long long ll;

vector<bool>mark(10000005);
vector<ll>prime;
vector<ll>isprime;


ll l,r,i,current,sq,j,pos=0;

void sieve()
{
  sq=sqrt(mx)+1;
  prime.push_back(2);

  for(i=4;i<=mx;i+=2){mark[i]=true;}

  for(i=3;i<=mx;i+=2)
  {
    if(mark[i]==0)
    {
      prime.push_back(i);

      if(i<=sq)
      {
        for(j=i*i;j<=mx;j+=i)
        {
          mark[j]=true;
        }
      }
    }
  }
}

void segmented_sieve(ll l,ll r) /// left and right range.
{
  vector<bool>seg_prime(r-l+1);

  for(i=0;i<r-l+1;i++){seg_prime[i]=false;}  /// false means initially prime
  if(l==1) seg_prime[0]=1;

  for(i=0;prime[i]*prime[i]<=r;i++)   /// prime upto sqrt of r
  {
    current=prime[i];            /// current prime num
    ll start=(l/current)*current;  /// start cutting from the range start. such l=20 the 20/2*2=20 ,
    if(start<l) start+=current;    ///from 20 cutting will be start. 2 is first prime

    for(j=start;j<=r;j+=current){seg_prime[j-l]=true;}
    if(start==current){seg_prime[start-l]=false;}

  }
  int mxx,mnx,sizz;
  int a,b,c,d;
  mxx=INT_MIN;
  mnx=INT_MAX;

  for(i=0;i<r-l+1;i++)
  {
    if(seg_prime[i]==false)
    {
      isprime.push_back(i+l);
     // cout<<(l+i)<<" ";
    }
  }

  if(isprime.size()<2) cout<<"There are no adjacent primes."<<endl;
  else
  {
      for(i=0,sizz=isprime.size();i<sizz-1;i++)
      {
        if((isprime[i+1]-isprime[i])<mnx)
        {
          mnx=isprime[i+1]-isprime[i];
          b=isprime[i+1];
          a=isprime[i];
        }

        if((isprime[i+1]-isprime[i])>mxx)
        {
          mxx=isprime[i+1]-isprime[i];
          d=isprime[i+1];
          c=isprime[i];
        }
      }

    cout<<a<<","<<b<<" are closest, "<<c<<","<<d<<" are most distant."<<endl;
  }

  seg_prime.clear();
  isprime.clear();
}


int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   sieve();   ///functiion call
/*for(i=0;i<prime.size();i++)
{
  cout<<prime[i]<<" ";
}*/

    while (cin>>l>>r)
    {
      segmented_sieve(l,r);   ///function call
    }


 return 0;
}
