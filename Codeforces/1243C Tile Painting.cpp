#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	ll a,tmp,num,q;


        cin>>num;

        int limit=sqrt(num);

        for(int i=2;i<=limit;i++)
        {
           if(num%i==0)
           {
               while((num%i==0))
               {
                 num/=i;
               }
               if(num==1) cout<<i;
               else cout<<1;
               return 0;
           }
        }
        cout<<num<<endl;///if the num is prime

    return 0;
}

