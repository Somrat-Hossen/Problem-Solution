#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
typedef double d;
using namespace std;

double p,q,r,s,t,u,res;

double Expression(double x)
{
   return (p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u);
}

void Bisection()
{

  double lb=0,ub=1,mid;

   for(int i=0;i<100;i++)
   {
       mid=(ub+lb)/2.0;
       res=Expression(mid);

      if(res<=0)
         ub=mid;

       else lb=mid;
    }
    if((res<-.00000001)|| (res>.00000001))
        cout<<"No solution"<<endl;

    else
      cout<<fixed<<setprecision(4)<<mid<<endl;

}


int main()
{

    ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	while(cin>>p>>q>>r>>s>>t>>u)
	{
        Bisection();

	}


    return 0;
}

