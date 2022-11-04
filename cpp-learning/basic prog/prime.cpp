//prime print
#include <iostream>
using namespace std;

int Is_prime(int a)
{
    int b=0;
    for(int i=2; i<=a/2; i++)
    {
        if(a % i == 0)
          b=1;
    }
    return b;
}

int main()
{
    if(Is_prime(13) == 0)
       cout<<"prime";
    else
      cout<<"Not prime";

    return 0;
}

