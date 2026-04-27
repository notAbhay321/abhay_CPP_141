/* topic
code number:
date:31/03/2026
topic: passing objets as arugiments
note access specifier: public, private &
Question Write a cpp program to pass object as an function argument and add two objects( make the member funciton non-inline{in class sir demonstrated inline member function}*/
//this is inline function code
#include<iostream>
using namespace std;
class Time
{
    int hour, minute,second;
public:
    void getTime(){
    cout << "Enter hours, minutes, seconds: ";
    cin >> hour >> minute >> second;
    }
    void printTime(){
    cout <<"time (in H:M:S)"<< hour << ":" << minute << ":" << second << endl;
    }
    void addTime(Time x,Time y){
        time =temp;
    temp.hour=x.hour+y.hour;
    temp.minute=x.minute +y.minute;
    temp.second=x.second+y.second;
    return temp
    }
};
int main(){
    Time t1, t2, t3;
    cout << "Enter first time:\n";
    t1.getTime();
    cout << "Enter second time:\n";
    t2.getTime();
    t3.addTime(t1, t2);   // passing/returning objects
    cout << "Sum of time: ";
    t3.printTime();
return 0;
}
