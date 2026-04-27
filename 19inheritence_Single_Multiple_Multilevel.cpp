#include <iostream>
using namespace std;

/*
========================================
1. SINGLE INHERITANCE
========================================
*/

class A {
public:
    void showA() {
        cout << "Class A (Base class)\n";
    }
};

class B : public A {   // Single Inheritance
public:
    void showB() {
        cout << "Class B (Derived from A)\n";
    }
};

/*
========================================
2. MULTILEVEL INHERITANCE
========================================
*/

class C {
public:
    void showC() {
        cout << "Class C (Base class)\n";
    }
};

class D : public C {
public:
    void showD() {
        cout << "Class D (Derived from C)\n";
    }
};

class E : public D {   // Multilevel (C → D → E)
public:
    void showE() {
        cout << "Class E (Derived from D)\n";
    }
};

/*
========================================
3. MULTIPLE INHERITANCE
========================================
*/

class X {
public:
    void showX() {
        cout << "Class X\n";
    }
};

class Y {
public:
    void showY() {
        cout << "Class Y\n";
    }
};

class Z : public X, public Y {   // Multiple Inheritance
public:
    void showZ() {
        cout << "Class Z (Derived from X and Y)\n";
    }
};

/*
========================================
MAIN FUNCTION
========================================
*/

int main() {

    cout << "----- Single Inheritance -----\n";
    B obj1;
    obj1.showA();
    obj1.showB();

    cout << "\n----- Multilevel Inheritance -----\n";
    E obj2;
    obj2.showC();
    obj2.showD();
    obj2.showE();

    cout << "\n----- Multiple Inheritance -----\n";
    Z obj3;
    obj3.showX();
    obj3.showY();
    obj3.showZ();

    return 0;
}
