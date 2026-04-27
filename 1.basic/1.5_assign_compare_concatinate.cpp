//concatination, also there is += operator but there are other operators but they are complex
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1="Hello ";
    string str2="world!";
    string result = str1 + str2;
    cout<<result<<endl;

    //concatenating string and a literal
    string str3= str1+ ",c++";
    cout<<str3<<endl;
    return 0;
}
//code is cc
