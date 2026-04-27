#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    // Default constructors
    Demo() //here there is no truen type
     {
        x = 0;
        cout << "Default Constructor called, x = " << x << endl;
    }

    // Parameterized constructors
    Demo(int a) //here there is a dreturn type of data
    {
        x = a;
        cout << "Parameterized Constructor called, x = " << x << endl;
    }
     // Copy constructors
    Demo(const Demo &x)
     {
        x = d.x;
        cout << "Copy Constructor called, x = " << x << endl;
    }


    void display() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Demo obj1;        // Default
    Demo obj2(10);    // Parameterized
    Demo obj3 = obj2; // Copy

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
