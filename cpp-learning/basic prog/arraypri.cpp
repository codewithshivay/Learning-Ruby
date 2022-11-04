//arrays Print..!!
#include <iostream>
using namespace std;

/*int main()
{
    int a[]={23,54,76,87,98,34,2,32};
    for(int i=0; i<8; i++)
      cout<<" "<<a[i];

    return 0;
}*/

class arr
{
  private:
   int a[10];
  public:
   void input(int a[])
   {
     int sum=0,i;
     for(i=0; i<5; i++)
       sum = sum + a[i];
    cout<<sum;
   }
}A1;

int main()
{
    int A[]={2,3,4,5,2};
    A1.input(A);

    return 0;
}
