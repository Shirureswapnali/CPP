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
class Manager:public Emp
{
    public:
    Manager()
    {
        
    }
    void showda()
    {
        cout<<"This is a Manager class";
    }
};
int main()
{
    Manager m1;
    m1.show();
    m1.showdata();
    m1.showda();
    return 0;
}
