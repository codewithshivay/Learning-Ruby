// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int c=0;
class Triangle
{
  private:
    int a,b;
  public:
    Triangle()
    {
       // cout<<"\n"<<"default const";
        c++;
        cout<<"\n"<<c;
    }
    ~Triangle()
    {
        cout<<"\n"<<c;
    }
    Triangle(int a)
    {
        cout<<"\n"<<"permeterized const";
    }
    Triangle(int a, int b)
    {
        cout<<"\n"<<"2nd permeterized const";
    }
    /*Triangle()
    {
        cout<<"\n"<<c;
    }*/

};

int main()
{
    Triangle t1,t2,t3(4,5),t4(6);

   return 0;
}
