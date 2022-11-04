//C++ program to define a class Rectangle...
#include <iostream>
using namespace std;
class Rectangle{
    private:
        int l,b;
    public:
        void input(int L, int B){
            l = L;
            b = B;
        }
        int area(){
            return l * b;
        }
};
int main()
{
    Rectangle r1,r2;
    r1.input(5, 9);
    r2.input(2, 8);
    cout << "Area of r1: " <<r1.area()<<"\n";
    cout << "Area of r2: " <<r2.area()<<"\n";
}
