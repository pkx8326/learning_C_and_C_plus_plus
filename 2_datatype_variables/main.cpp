#include <iostream>
using namespace std;

int main() {
//DATA TYPES

    // numbers : int, float, double
    20; 500; -100; 0; // int
    3.14f; -7.626f; 1.602f; 10.0f;  // float 7-lace precision
    3.14; -7.626; 1.602; 10.0; // double 15-place precision


    // logical : bool
    true; false;

    // character : char
    'a'; 'A'; 'x'; '3'; '7';

// VARIABLES

    // int
    int myAge = 29;
    cout << myAge << endl;

    // float
    float thePrice = 24.99f;
    cout << thePrice << endl;

    // double
    double myWeight = 78.6;
    cout << myWeight << endl;

    // bool
    bool isVaccinated = true;
    bool isInfected = false;

    cout << isVaccinated << endl;
    cout << isInfected << endl;

    // char
    char dollarSign = '$';
    cout << dollarSign << endl;

    // constant
    const float PI = 3.14;
    // can also use:  float const PI = 3.14;
    cout << PI << endl;

    return 0;
}