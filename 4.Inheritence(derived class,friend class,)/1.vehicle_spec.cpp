#include <iostream>
using namespace std;

class Vehicle
{
private:
    int speed;

    void showspeed()
    {
        cout << "Speed: " << speed << endl;
    }
};

class Car : public Vehicle
{
public:
    string brand;
};

int main()
{
    Car c1;
    bus b1;

    c1.brand = "Toyota";
    c1.speed = 120;
    b1.brand="Volvo";
    b1.speed=100;

    cout << "Brand: " << c1.brand << endl;
    c1.showspeed();

    return 0;
}
