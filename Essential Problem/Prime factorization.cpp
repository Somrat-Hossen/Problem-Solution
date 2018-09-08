# include <bits/stdc++.h>
# include <math.h>
 using namespace std;
// A function to print all prime factors of a given number n
void primeFactors(int n)
{
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }

    int x=n;
    for (int i = 3; i *i<=(x); i = i+2)
    {
        while(n%i==0)
        {
            printf("%d ", i);
            n = n/i;
       }
    }
   if (n > 2)
  printf ("%d ", n);
}



int main()
{
    int n ;
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}

