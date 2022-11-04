#include <iostream>
using namespace std;

class stat
{
  private :
   //static int a;
   int a;
  public :
    int input()
   {
     a=x;
     cout<<"Enter a Number : ";
     cin>>a;
     display();
   }
    int display()
   {
     cout<<"square is : "<<a*a;
   }
}s1;
//int stat :: a;
int main()
{
  s1.input();
}
