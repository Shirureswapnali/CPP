#include<iostream>
using namespace std;
class Student
{
    public:
    Student()
    {
        
    }
    void show()
    {
        cout<<"This is Parent classs"<<endl;
    }
};
class Emp:public Student
{
    public:
    Emp()
    {
        
    }
    void showdata()
    {
        cout<<"This is a Child class";
    }
};
int main()
{
    Emp e1;
    e1.show();
    e1.showdata();
    return 0;
}
