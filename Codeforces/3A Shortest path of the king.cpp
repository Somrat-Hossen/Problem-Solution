#include<bits/stdc++.h>
#define Check(r,c) ((r>=0 && r<=7) && (c>=0 && c<=7))
using namespace std;
struct node{
    int x, y;
};
int sx,sy,tx,ty;
int r[10]        ={1,1,1,0,0,-1,-1,-1};
int c[10]        ={0,1,-1,1,-1,0,1,-1};
string path[10]  ={"U","RU","LU","R","L","D","RD","LD"};
queue<node>q;
vector<string>f_path;
int p[10][10][3];
bool vis[10][10];
int dis[10][10];
void bfs()
{
    node n;
    n.x = sx;
    n.y = sy;
    q.push(n);
    vis[sx][sy]=1;
    while(!q.empty())
    {
        node f= q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int x = f.x+ r[i],y = f.y + c[i];
            if(Check(x,y))
            {
                if(vis[x][y]  == 0   )
                {
                    vis[x][y] = 1;
                    n.x = x;
                    n.y = y;
                    p[x][y][0]=f.x;
                    p[x][y][1]=f.y;
                    p[x][y][2]=i;
                    q.push(n);

                    dis[x][y] = dis[f.x][f.y] + 1;
                }
            }
        }
    }
    int len = dis[tx][ty];
    cout<<len<<endl;
    //while(tx!=sx || ty !=sy)
    for(int i=len;i>0;i--)
    {
        f_path.push_back(path[p[tx][ty][2]]);
        //cout<<path[p[tx][ty][2]]<< " ";
        tx =p[tx][ty][0];
        ty =p[tx][ty][1];

    }
    for(int i=(int)f_path.size()-1;i>=0;i--)
    {
        cout<<f_path[i]<<endl;
    }
}


int main()
{
    char s[3],d[3];
    scanf("%s",s); sx = s[1] -'1'; sy = s[0]-'a';
    scanf("%s",d); tx = d[1] -'1'; ty = d[0]-'a';
    bfs();

    return 0;
}
