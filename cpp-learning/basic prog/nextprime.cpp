/*Write function to find next prime number of a given number*/
#include <iostream>
using namespace std;
int Is_prime(int);
int next_prime(int);

int Is_prime(int n)
{
    for(int i=2; i<n/2; i++)
     {
         if(n % i == 0)
           return 1;
     }
     return 0;
}

int next_prime(int x)
{
    int temp,i;
    temp = x;
    if(Is_prime(x) == 0)
    {
      while(1)
      {
        temp++;
        if(Is_prime(temp)==0)
            return temp;
      }
    }
    else
     cout<<"Enter Number is not prime";
}

int main()
{
    int c;
    c = next_prime(5);
        cout<<"the next prime is : "<<c;

    return 0;
}
