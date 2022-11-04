//factorial function
#include <iostream>
using namespace std;

int fact(int a)
{
    for(int i=1; i<=a; i++)
    {
        int s = s * i;
    }
    return s;
}

int main()
{
    cout<<fact(6);

    return 0;
}

