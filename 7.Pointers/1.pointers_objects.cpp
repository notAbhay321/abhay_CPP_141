#include <iostream>
using namespace std;

class ABC
{
public:
    int a = 50;
};

int main()
{
    ABC obj1;
    ABC *ptr;
    ptr = &obj1;
    cout << obj1.a << endl;
    cout << ptr->a; // accessing member with pointer

    return 0;
}
