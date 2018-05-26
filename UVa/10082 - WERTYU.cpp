#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define lop(i,n)      for(int i=1; i<=n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define minint(a,b,c) (a<b)?(a<c)?a:c :(b<c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;

typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,m=1000003,t,r;
int arr[100000],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>q;
vector<int>vec;
char ch;


int main()
 {
  while(getline(cin,str))
  {
    len=str.length();
   for(i=0;i<len;i++)
   {
      switch(str[i])
      {
           case 'W':
            printf("Q");    break;
            case 'E':
            printf("W");    break;
            case 'R':
            printf("E");    break;
            case 'T':
            printf("R");    break;
            case 'Y':
            printf("T");    break;
            case 'U':
            printf("Y");    break;
            case 'I':
            printf("U");    break;
            case 'O':
            printf("I");    break;
            case 'P':
            printf("O");    break;
            case 'S':
            printf("A");    break;
            case 'D':
            printf("S");    break;
            case 'F':
            printf("D");    break;
            case 'G':
            printf("F");    break;
            case 'H':
            printf("G");    break;
            case 'J':
            printf("H");    break;
            case 'K':
            printf("J");    break;
            case 'L':
            printf("K");    break;
            case 'X':
            printf("Z");    break;
            case 'C':
            printf("X");    break;
            case 'V':
            printf("C");    break;
            case 'B':
            printf("V");    break;
            case 'N':
            printf("B");    break;
            case 'M':
            printf("N");    break;
            case '2':
            printf("1");    break;
            case '3':
            printf("2");    break;
            case '4':
            printf("3");    break;
            case '5':
            printf("4");    break;
            case '6':
            printf("5");    break;
            case '7':
            printf("6");    break;
            case '8':
            printf("7");    break;
            case '9':
            printf("8");    break;
            case '0':
            printf("9");    break;
            case '-':
            printf("0");    break;
            case '=':
            printf("-");    break;
            case '[':
            printf("P");    break;
            case ']':
            printf("[");    break;
            case '\\':
            printf("]");    break;
            case ';':
            printf("L");    break;
            case '1':
            printf("`");    break;
            case ',':
            printf("M");    break;
            case '.':
            printf(",");    break;
            case '/':
            printf(".");    break;
            case ' ':
            printf(" ");    break;
            default:
            printf(";");    break;

      }

   } cout<<endl;
  }


    return 0;
  }

