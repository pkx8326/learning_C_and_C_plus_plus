#include <iostream>
// #include <string>
using namespace std;

int main() {

    // declaring variables

    int age = 25;
    float height = 178;
    char gender = 'f';
    double savings = 3900000.0;
    // string vehicle = "Miata MX5"; // special kind of variable
    bool seekingJob = true;

    cout << age << endl;
    cout << height << endl;
    cout << gender << endl;
    cout << savings << endl;
    // cout << vehicle << endl;
    cout << seekingJob << endl;

    // displaying variable types

    cout << typeid(age).name() << endl;
    cout << typeid(height).name() << endl;
    cout << typeid(gender).name() << endl;
    cout << typeid(savings).name() << endl;
    // cout << typeid(vehicle).name() << endl; // seems that we get a memory address instead of a type
    cout << typeid(seekingJob).name() << endl;
    
    return 0;
}