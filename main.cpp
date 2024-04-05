#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string lastname;
    int age;


    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your last name: ";
    cin >> lastname;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << " " << lastname << "! Your age is " << age << "! Nice to meet you!" << endl;

    return 0;
}