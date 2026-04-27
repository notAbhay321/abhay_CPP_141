//Question: write a cpp program to demonstate *scope resolution* operator

#include<iostream>
using namespace std;
int m=10;
int main()
{
    int m=5000;
    {
        int m=999;
        cout<<m<<endl;
    }
    cout<<m<<endl;
    cout<< ::m<<endl; //so this prints globally i.e m=10
    return 0;



}
