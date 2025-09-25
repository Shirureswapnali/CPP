
#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    public:
    void get()
    {
        cout<<"Enter the roll";
        cin>>roll;
        cout<<"Enter the name";
        cin>>name;
    }
 void show()
    {
        cout<<"Student Information"<<endl;
        cout<<roll<<endl<<name;
    }
};
int main()
{
    Student s1;
s1.get();
s1.show();
return 0; 
}
