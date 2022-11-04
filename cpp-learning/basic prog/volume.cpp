//two overloaded versions of function calculating volume of sphere and cuboi
#include <iostream>
using namespace std;

int volume(int r)
{
  return (4/3*3.14*r*r*r);
}

int volume(int L, int B, int H)
{
  return (L*B*H);
}

int main()
{
  cout<<"\n"<<volume(2);
  cout<<"\n"<<volume(5,5,2);
}
