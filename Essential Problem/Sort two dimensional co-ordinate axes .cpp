#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 struct Axes
 {
     int x,y;
 };
 int cmp(struct Axes a,struct Axes b)
 {
     if(a.x!=b.x)
        return (a.x<b.x);
     else
         return a.y<b.y;
 };

int main()
 {
     int n,i;
     puts("Enter the number of point:");
     cin>>n;

     struct Axes lst[n+1];

     puts("Enter the axes for x and y:");
     for(i=0;i<n;i++)
     {
         cin>>lst[i].x>>lst[i].y;
     }
     cout<<"Sorted Axes are: x y"<<endl;

     sort(lst,lst+n,cmp);

     for(i=0;i<n;i++)
     {
         cout<<lst[i].x<<" "<<lst[i].y<<endl;
     }

    return 0;
  }

