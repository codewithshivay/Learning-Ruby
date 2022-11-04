#include <iostream>
using namespace std;

class Number
{
  private :
   int a,b;
  public :
   void set_data(int x, int y)
   {
      a=x;
      b=y;
      //show_data(); // nested member function..
   }

   void show_data()
   {
      cout<<"\na : "<<a<<"\nb : "<<b;
   }

};

int main()
{
  Number num;
  num.set_data(5,7);
  num.show_data();

 return 0;
}
