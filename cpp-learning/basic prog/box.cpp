/*program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height */
#include <iostream>
using namespace std;
class Volume
{
    private:
      int l,b,h;
    public:
      int input_data(int len, int bre, int hei)
      {
          l = len;
          b = bre;
          h = hei;
      }
      void show_data()
      {
          cout<<"volume of box is : "<<l*b*h;
      }
};

int main()
{
    Volume v1;
    v1.input_data(2,5,7);
    v1.show_data();
}
