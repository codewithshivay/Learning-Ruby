/*Write a CPP program to calculate sum of first N natural numbers
Write a CPP program to calculate factorial of a number
Write a CPP program to check whether a given number is prime or not*/
#include <iostream>
using namespace std;
int sum_of_natural(int);
int factorial(int);
int prime(int);

int sum_of_natural(int n)
{
   int i,sum=0;
   for(i=1; i<=n; i++)
   {
     sum = sum + i;
   }
    return sum;
}

int factorial(int n)
{
  int i,multi=1;
  for(i=1; i<=n; i++)
  {
    multi = multi * i;
  }
  return multi;
}

int prime(int n)
{
   int i;
   for(i=2; i<=n/2; i++)
   {
     if(n % i == 0)
       return 1;
   }
   return 0;
}

int main()
{
  cout<<"\n"<<sum_of_natural(5);
  cout<<"\n"<<factorial(5);
  cout<<"\n"<<prime(5);

  return 0;
}
