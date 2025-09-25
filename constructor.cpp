
#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    public:
    Student()
    {
        cout<<"Enter the roll";
        cin>>roll;
        cout<<"Enter the name";
        cin>>name;
    }
    Student(int r,string nm)
    {
        roll=r;
        name=nm;
    }
Student( const Student &s2)
{
   roll=s2.roll;
    name=s2.name;
}
 void show()
    const{
        cout<<"Student Information"<<endl;
        cout<<roll<<endl<<name;
    }
};
int main()
{
    Student s1;
    Student s(1,"swapnali");
    Student s3=s1;
    s1.show();
    s.show();
    s3.show();
    return 0;
}
