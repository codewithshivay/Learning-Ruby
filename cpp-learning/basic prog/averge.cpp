/*Average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class*/
#include <iostream>
using namespace std;

class Average
{
   private:
     int num1,num2,num3;
   public:
     void average(int a, int b, int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
       cout<<"The average is : "<<(num1+num2+num3)/3;
    }
};

int main()
{
    Average a1;
   a1.average(10,10,10);
}
