#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
       {
           int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,t,i=1,area;
           double A,B;
           scanf("%d",&t);
           while(t--)
           {
           scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
           Dx=(Ax+Cx)-Bx;
           Dy=(Ay+Cy)-By;
           A=sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
           B=sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
          // cout<<A*B;


           area=((Ax*(By-Cy))-(Ay*(Bx-Cx))+(Bx*Cy)-(Cx*By));
          ///area=0.5*area;
          // area=A*B;
           printf("Case %d: %d %d %d\n",i,Dx,Dy,abs(area));
           i++;
           }

           return 0;

       }
