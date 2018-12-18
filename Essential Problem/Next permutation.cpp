#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
   int n;
   vector<int>vec;
   cin>>n;

   for(int i=0;i<n;i++)
   {
      vec.push_back(i+1);
   }


   do
   {
     for(int i=0;i<n;i++)
     {
        cout<<vec[i]<<" ";
     }
     cout<<endl;
    }while( next_permutation( vec.begin(), vec.end() ) );



    return 0;
}




