#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("Dhaka university of Engineering & Technology.");
  string str2= "Engineering";


  int found = str.find(str2);

  if (found!=string::npos)

       cout <<"found at position: " << found << '\n'; ///return the first char if found.

 else
    cout<<"Not found"<<endl;




  return 0;
}
