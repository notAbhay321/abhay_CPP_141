#include<iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void getTime(){
        cout << "Enter hours, minutes, seconds: ";
        cin >> hour >> minute >> second;
}

    void printTime(){
        cout << "Time (H:M:S): " << hour << ":" << minute << ":" << second << endl;
    }

    Time addTime(Time x, Time y){
        Time temp;   // pointer object
        temp->hour = x.hour + y.hour;
        temp->minute = x.minute + y.minute;
        temp->second = x.second + y.second;

        return *temp;   // return object (dereference)
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "Enter second time:\n";
    t2.getTime();

    t3 = t1.addTime(t1, t2);

    cout << "Sum of time: ";
    t3.printTime();

    return 0;
}
