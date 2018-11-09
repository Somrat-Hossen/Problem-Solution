#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);


    int a,b,c,d,l,x,y;

    while(cin>>a>>b>>c>>d>>l)
    {
       int  cnt=0;
        if(a==0 and b==0 and c==0 and d==0 and l==0)
        {
            break;
        }
        else{

            for(int i=0;i<=l;i++)
            {
                x=a*i*i+b*i+c;
                if(x%d==0) cnt++;
            }
            cout<<cnt<<endl;


        }
    }


    return 0;
}

