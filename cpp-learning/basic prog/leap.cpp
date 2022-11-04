//Program to check whether a given year is a leap year or not.
#include <iostream>
using namespace std;

int leap_year(int n)
{
    if(n % 4 == 0)
      cout<<"Leap Year";
    else
      cout<<"Simple Year";
}

int main()
{
   leap_year(2025);
    return 0;
}
