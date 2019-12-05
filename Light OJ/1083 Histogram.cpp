#include <bits/stdc++.h>
#define mx 30005
typedef long long ll;
using namespace std;

/*
Idea:
 Given an array representing height of bar in bar graph, find max histogram
 * area in the bar graph. Max histogram will be max rectangular area in the
 * graph.
 *
 * Maintain a stack
 *
 * If stack is empty or value at index of stack is less than or equal to value at current
 * index, push this into stack.
 * Otherwise keep removing values from stack while stack top is greater than the cur index value
 * While removing value from stack calculate area
 * if stack is empty
 * it means that till this point value just removed has to be smallest element
 * so area = arr[top] * i
 * if stack is not empty then this value at index top is less than or equal to
 * everything from stack top + 1 till i. So area will
 * area = arr[top] * (i - stack.top() - 1);
 * Finally maxArea is area if area is greater than maxArea.

*/


void Get_max_area(int arr[],int n)
{
   stack<int>stk;
   ll max_area=0,area;
   int top,i;

   for( i=0;i<n;i++)
   {
      if( (stk.empty()) || (arr[stk.top()]<=arr[i]) ) stk.push(i);
      else
      {
         while( !stk.empty() && (arr[stk.top()]>arr[i]))
         {
             top=stk.top();stk.pop();

             if(stk.empty()) area=arr[top]*i;
             else area=arr[top]*((i-stk.top()-1));

             max_area=max(max_area,area);
         }
        stk.push(i);
      }
   }

   while( !stk.empty() ) ///if last index element is greater...........
   {
       top=stk.top();stk.pop();

       if(stk.empty()) area=arr[top]*i;
       else area=arr[top]*((i-stk.top()-1));

       max_area=max(max_area,area);
   }

   cout<<max_area<<endl;

}


int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	/*
	 o(n*n) 
	int arr[]={4,4,3,2,4};
	int n=sizeof arr/sizeof arr[0];
	int maxarea=INT_MIN ,mn;

	for(int i=1;i<n;i++)
   {
      maxarea=max(maxarea,arr[i]);
      mn=arr[i];

      for(int j=i-1;j>=0;j--)
      {
         mn=min(mn,arr[j]);
         maxarea=max( maxarea,(mn*(i-j+1)));
      }
   }

   cout<<maxarea<<endl;

   */

   int q,n;

   cin>>q;
   for(int i=1;i<=q;i++)
   {
      cin>>n;
      int arr[n+2];

      for(int i=0;i<n;i++) cin>>arr[i];
      cout<<"Case "<<i<<": ";
      Get_max_area(arr,n);
   }
    return 0;
}
