#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Student Constructor Called" << endl;
    }
    void showStudent() {
        cout << "This is Student class" << endl;
    }
};

class Emp : public Student {
public:
    Emp() {
        cout << "Employee Constructor Called" << endl;
    }
    void showEmp() {
        cout << "This is Employee class" << endl;
    }
};

class Manager : public Student {
public:
    Manager() {
        cout << "Manager Constructor Called" << endl;
    }
    void showManager() {
        cout << "This is Manager class" << endl;
    }
};

class Director : public Emp, public Manager {
public:
    Director() {
        cout << "Director Constructor Called" << endl;
    }
    void showDirector() {
        cout << "This is Director class" << endl;
    }
};

int main() {
    Director d1;
    d1.Emp::showStudent();
    d1.Emp::showEmp();
    d1.Manager::showStudent();
    d1.Manager::showManager();
    d1.showDirector();
    return 0;
}
