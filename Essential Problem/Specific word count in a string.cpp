#include <bits/stdc++.h>
using namespace std;

void printFrequency(string st)
{
    // each word it mapped to it's frequency
    map<string, int> mp;

    stringstream ss(st);    // Used for breaking words
    string Word;            // To store individual words

    while (ss >> Word)
    {

       mp[Word]++;

    }




    map<string, int>::iterator m;

    for (m = mp.begin(); m != mp.end(); m++)
    {

        cout << m->first << " : "<< m->second << "\n";
    }

}

// Driver code
int main()
{
    string s = "Geeks For Geeks Ide";
    printFrequency(s);
    return 0;
}
