//single inheritance
#include <iostream>
using namespace std;

class Student
{
   private:
     char name[20];
     int roll_number;
   protected:
     void input(char arr[],int roll)
     {
         for(int i=0; arr[i]; i++)
            name[i] = arr[i];

          roll_number = roll;
          display();
     }
     void display()
     {
         cout<<"\n"<<name<<"       "<<roll_number;
     }
};

class Test : public Student
{
    private:
       int sub1,sub2;
    public:
       void put(char ar[], int rol,int s1, int s2)
       {
           input(ar,rol);
           sub1 = s1;
           sub2 = s2;
       }
     void show()
     {
        int sum = 0;
        sum = sub1 + sub2;
        cout<<"          "<<sum;
        cout<<"          "<<sum / 2.0;
     }
};

int main()
{
    Test t1,t2;
    cout<<"Name      Roll_Number      Result     Average";
    t1.put("Chiku",12045,50,90);
    t1.show();
    t2.put("Pinku",12046,89,90);
    t2.show();

}
