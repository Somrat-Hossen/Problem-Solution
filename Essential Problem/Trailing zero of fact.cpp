#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
int arr[10000];

using namespace std;

int check(int n)
{

}

int main()
{
     int fact,i=5,sum=0,x;
     cout<<"Enter your n! :"<<endl;
     cin>>fact;
     while(1)
     {
         int x=fact/i;
         if(x==0) break;
         sum+=x;
         i*=5;
     }
     cout<<"Trailing zero is :"<<sum<<endl;
    return 0;
}

