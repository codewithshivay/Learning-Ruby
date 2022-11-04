#include <iostream>
using namespace std;

class student
{
  private :
   int a;
  public :
   void set_data(int x)
   {
     a = x;
     a =  a / 5;
     show_data();
   }

   void show_data()
   {
      cout<<"\n The percetage is  : "<<a<<"%";
   }

};

int main()
{
 //student s1; // also declare the end block of the class
 int a;
 cout<<"Enter your total marks 500 / ";
 cin>>a;
 s1.set_data(a);

 return 0;
}
