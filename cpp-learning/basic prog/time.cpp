/*Program to define a class Time with HR,MIN, SEC as member vari & setTime, showTime, normalize as member functions*/
#include <iostream>
using namespace std;

class Time
{
  private :
   int h,m,s;
  public :
   void input_time()
   {
       cout<<"Enter time : ";
       cin>>h>>m>>s;
       display();
   }
   void display()
   {
       cout<<h<<"HR:"<<m<<"MIN:"<<s<<"SEC";
   }
}t1;

int main()
{
    t1.input_time();
}
