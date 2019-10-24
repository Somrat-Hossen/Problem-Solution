#include <bits/stdc++.h>
#define ll long long
#define mx 20005
#define lop(i,n) for(int i=1;i<=n;i++)

using namespace std;

bool ter[2*10005];


void Conversion()
{
   for(int i=1;i<=mx-5;i++)
   {
      int num=i;
      ll base=1,ternary=0,rem;

          while(num > 0)
          {
              rem = num % 3;
              ternary = ternary + rem * base;
              num /= 3;
              base = base * 10;
          }

         ll tmp,cnt=0;

         tmp=ternary;
         while(tmp)
         {
            if(tmp%10==2) {cnt=1;break;}
            tmp/=10;
         }

       if(!cnt) ter[i]=1;///if the num has no 2 in the ternary form then corresponding value save as 1;
   }

  // for(int i=1;i<=10;i++) cout<<ter[i]<<" ";
}

void Solve(int pos)
{
    for(int i=pos;i<=2*pos;i++)
    {
       if(ter[i]) {cout<<i<<endl;break;}
    }

}

int main()
 {
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	int n,q,tmp;

	Conversion();

	cin>>q;

	while(q--)
   {
      cin>>n;
      Solve(n);
   }


    return 0;
  }

