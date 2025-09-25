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
        cout<<"This is a Child class"<<endl;
    }
};
class Manager:public Student
{
    public:
    Manager()
    {
        
    }
    void showda()
    {
        cout<<"This is a Manager class"<<endl;
    }
};
int main()
{
    Manager m1;
    m1.show();
    m1.showda();
  Emp e1;
  e1.show();
  e1.showdata();
    return 0;
}
