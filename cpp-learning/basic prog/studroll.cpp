/*Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no and the name by creating an object of the class Student...!*/
#include <iostream>
using namespace std;

class Student
{
    public:
        string name;
        int roll_no;

};

int main()
{
    Student s1;
    s1.name = "Shivam";
    s1.roll_no = 03;
    cout <<"Name is "<< s1.name <<"\n"<<"Roll No is : " << s1.roll_no <<"\n";
    return 0;
}
