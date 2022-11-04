#include <iostream>
int area(int);
int area(int , int);
using namespace std;

inline int area(int r)
{
    return r*r;
}

inline int area(int l, int b)
{
    return l*b;
}

int main()
{
    int r;
    cout<<"Enter a radius of circle : ";
    cin>>r;
    cout<<"\nthe area is : "<<area(r);
    int l,b;
    cout<<"\n"<<"Enter lenght and bredth : ";
    cin>>l>>b;
    cout<<"\nthe area is : "<<area(l,b);

    return 0;
}
