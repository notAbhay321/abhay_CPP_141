#include <iostream>
using namespace std;

// BASE CLASS
class ABC {
public:
    int i;
};

// DERIVED CLASSES (Virtual Inheritance)
class A : virtual public ABC {
public:
    void getA() {
        cout << "Enter i: ";
        cin >> i;
    }
};

class B : virtual public ABC {
public:
    int j;

    void getB() {
        cout << "Enter j: ";
        cin >> j;
    }
};

class C : virtual public ABC {
public:
    int k;

    void getC() {
        cout << "Enter k: ";
        cin >> k;
    }
};

// CLASS D → SUM
class D : public A, public B, public C {
public:
    void sum() {
        cout << "Sum = " << (i + j + k) << endl;
    }
};

// CLASS E → PRODUCT
class E : public A, public B, public C {
public:
    void product() {
        cout << "Product = " << (i * j * k) << endl;
    }
};

int main() {
    D d;
    cout << "---- For Sum ----" << endl;
    d.getA();
    d.getB();
    d.getC();
    d.sum();

    E e;
    cout << "\n---- For Product ----" << endl;
    e.getA();
    e.getB();
    e.getC();
    e.product();

    return 0;
}
