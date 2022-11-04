//Multiple inheritance
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
           show();
       }
     void show()
     {
        int sum = 0;
        sum = sub1 + sub2;
        cout<<"          "<<sum;
        cout<<"          "<<sum / 2.0;
     }
};

class Result : public Student,public Test
{
    //private:
      //int result;
    public:
      int inputData(char na[], int ro,int first,int sec)
      {
           put(na,ro,first,sec);
      }
};

int main()
{
    Result r1,r2;
    cout<<"Name      Roll_Number      Result     Average";
    r1.inputData("Chiku",12045,50,90);
    r2.inputData("Pinku",12046,89,90);
}
