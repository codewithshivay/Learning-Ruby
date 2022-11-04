/*Define two overloaded versions of function calculating area of circle and rectangle*/
#include <iostream>
using namespace std;

float area(float r)
{
    return (3.14*r);
}

int area(int L, int B)
{
    return(L*B);
}

int main()
{
    cout<<"\n"<<area(5.0);
    cout<<"\n"<<area(4,5);
}
