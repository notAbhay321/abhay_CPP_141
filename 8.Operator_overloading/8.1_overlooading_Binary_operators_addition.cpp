#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Set values
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    // Display values
    void showdata()
    {
        cout << "a = " << a << " , b = " << b << endl;
    }

    // Addition operator overloading
    Complex operator+(const Complex &c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    // Subtraction operator overloading
    Complex operator-(const Complex &c)
    {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3, c4;

    // Input values
    c1.setdata(3, 4);
    c2.setdata(5, 6);

    // Perform operations
    c3 = c1 + c2;   // Addition
    c4 = c1 - c2;   // Subtraction

    // Output results
    cout << "Addition Result: ";
    c3.showdata();

    cout << "Subtraction Result: ";
    c4.showdata();

    return 0;3
}
