/*Write a program that would print the information (name, year of joining, salary) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining     salary*/
#include <iostream>
using namespace std;
class Employee
{
    private:
      char name[10];
      int year;
      int salary;
    public:
     void input_data(char emp[], int y, int sa)
     {
        for(int i=0; emp[i]; i++)
        {
          name[i] = emp[i];
        }
         year = y;
         salary = sa;
     }
     void show_data()
     {
        cout<<"\n"<<name<<"          "<<year<<"          "<<salary;
     }
};

int main()
{
   Employee e1,e2,e3;
    cout<<"Name    Year of joining    Salary";
   e1.input_data("sam",1994,30000);
   e1.show_data();
   e2.input_data("chotu",2000,20000);
   e2.show_data();
   e3.input_data("chiku",2004,10000);
   e3.show_data();

}
