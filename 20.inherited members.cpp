#include<iostream>
using namespace std;

//public derived
class Person
{
public:
    string name = "abhay";
protected :
    int age=20;
private:
    string college ="KLETU";
};

class PublicDerived :public Person{
public:
    void showStudent() {
        cout << "Public Inheritance (Student):" << endl;
        cout << "Name: " << name << endl;   // public -> public
        cout << "Age: " << age << endl;     // protected protected
        //cout << college<<endl;
    }
};
class ProtectedDerived :protected Person{
public:
    void showTeacher() {
        cout << "protected Inheritance (Student):" << endl;
        cout << "Name: " << name << endl;   // public -> protected
        cout << "Age: " << age << endl;     // protected protected
        //cout << college<<endl;
    }
};
/*class ProtectedDerived :private Person{
public:
    void showGuestTeacher() {
        cout << "private Inheritance (Student):" << endl;
        cout << "Name: " << name << endl;   // public -> private
        cout << "Age: " << age << endl;     // protected protected
        cout << college<<endl;
    }
};*/

int main()
{
    Student s;
    s.showStudent();

    Engineer e;
    e.showTeacher();

    GuestTeacher g;


}
