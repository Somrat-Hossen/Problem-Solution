#include<bits/stdc++.h>
#define ll long long int
using namespace std;


vector<int> p;

int main()
{
    int num,power;
    cin>>num>>power;

    int s=1;
    p.push_back(1);
    for(int i=1;i<31;i++)  /// for int num
    {
        s*=power;
        p.push_back(s);
    }

   vector<int>::iterator it=lower_bound(p.begin(),p.end(),num);

   int  n=abs(num-*it);
    if(n==0)
    {
       printf("%d is a power of %d",num,power);
    }
    else
    {
       printf("%d is not a power of %d",num,power);
    }
}

