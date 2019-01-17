 #include<bits/stdc++.h>
 using namespace std;


 int main()
 {
    double r,x1,y1,x2,y2,mov,dis;

   while( cin>>r>>x1>>y1>>x2>>y2)
   {
      dis=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
      dis=sqrt(dis);
      ///cout<<dis<<endl;
      cout<<ceil(dis/(2*r))<<endl;
   }

     return 0;
 }
