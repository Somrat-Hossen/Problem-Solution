#include<bits/stdc++.h>
using namespace std;

int n,maxArea,min_elem,length,area ;


/// This algo complexity is o(n^2);
/*
int Largest_area(int hist[],int n)
{

     for (int i = 0; i <n; ++i)
     {
        int h = hist[i];

        maxArea =max(maxArea, h);

        for (int j = i - 1; j >= 0; --j)
        {

            h =min(h, hist[j]);
             int w = (i - j + 1);

            maxArea =max(maxArea, h * w);
        }
     }

  return maxArea;

}
*/

int Largest_area(int hist[],int n)
{
      int i=0;
     stack<int>st;
     maxArea=0;

    while ( i < n)
    {
        if(st.empty() || (hist[st.top()] <= hist[i]))
        {
           st.push(i);
           i++;        /// we need to pop elem untill st top is equal <=hist[i] ,whenever st top<=hist[i]
                       /// so i increase only here not another place ,think a little bit
         }

        else
        {
           int top=st.top();
           st.pop();
           if(st.empty())
             {
               area=hist[top]*i;
             }
             else
             {
               area=hist[top]*(i-st.top()-1);
             }
           maxArea=max(maxArea,area);
        }
     }

     while(!st.empty())
     {
         int top=st.top();
         st.pop();

           if(st.empty())
             {
               area=hist[top]*i;
             }
             else
             {
               area=hist[top]*(i-st.top()-1);
             }
           maxArea=max(maxArea,area);
     }
     return maxArea;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cerr.tie(NULL);

   int tc;
   cin>>tc;

   for(int i=1;i<=tc;i++)
   {
      cin>>n;
      int hist[30002];

     for(int i=0;i<n;i++) cin>>hist[i];

     cout<<"Case "<<i<<": "<<Largest_area(hist,n)<<endl;

   }
  return 0;
}

/// Complexity: O(n);
