//string operator in the cpp
/*write a cpp program to read a string*/

#include <iostream>
#include <string>          //if not included it will throw error in string concatination and so on
/*
using namespace std;

int main()
{
    string s;
    cout << "Enter string: " << endl;
    cin >> s;

    cout << "STRING IS: " << s << endl;

    return 0;
}*/

int main()
{
    std::string s;
    std::cout << "Enter string: " << std::endl;
    std::cin >> s;
    std::cout << "STRING IS: " << s << std::endl;
    return 0;
}
