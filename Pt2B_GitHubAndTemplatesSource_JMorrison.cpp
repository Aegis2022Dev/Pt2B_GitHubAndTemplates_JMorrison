/*
* Joy Morrison
* CIS 1202
* 07/15/2021
*
* Week 11 – Exception Classes Part 2B: Write User Defined Template Functions to Facilitate Math Functions for Numeric Data Types
*
* Program develops a custom templated function to perform rounding math on various numeric data types
* Program creates and uses a customized math template function using the round() method from <cmath>
* Program will frquently utilize GitHub.com source management tool to push and commit changes to source code
* Final program push will be submitted to GitHub for Instructor cloning and review
*/

#include <iostream> // allow use of cout/cin data stream objects
#include <algorithm> //allow copying of arrays
#include <fstream> // to enable input/output field handlers
#include <iomanip> // to allow field formatting using setprecision, setw etc.
#include <cstring>  // allow use of cstring library 
#include <cctype> // allow use of isalpha, isdigit and other native boolean char/integer methods
#include <ctime> // to make rand() generator dynamic
#include <string>  // allow use of STRING library to use methods like getline()
#include <cstdlib> //permit use of basic utility and math fx like transform()
#include <cmath> // allow use of math library where necessary
#include <cstdbool> // allow use of boolean data structures where necessary
#include <cctype> //allow use of isdigit(arg) and other native boolean alphanumeric/char methods

using namespace std;

//DECLARE FORWARD DECLARATIONS, METHOD & STRUCTURES DEFINITIONS FOR FUNCTION PROTOTYPES

//The required half function

template <typename T>
T half(T number)
{
    T result;
    result = number /2;

    return result;
}


/****BEGIN main() METHOD****/

int main()
{
    double negArgX1 = -6.6; // a predefined negative double argument  
    double negArgX2 = -10.039364; // a predefined negative double argument
    double posArgX1 = 6.6; // a predefined positive double argument
    double posArgX2 = 7.039364; // a predefined positive double argument
    double a = 7.0;

    float X = 2.61; // a predefined positive float argument
    float Y = 7.16; // a predefined postive float argument
    float b = 5.0f;

    int arg1 = 3; // a predefined positive integer argument
    float argZ1 = static_cast<float> (arg1); // forcibly convert argZ into float so resulting 
                                             // non integer quotient will be accepted by round
    int arg2 = 11;
    float argZ2 = static_cast<float> (arg2); // a predefined positive integer argument

    int arg3 = -3;
    float argZ3 = static_cast<float> (arg3); // a predefined negative integer argument


    int c1 = 3;
    float c = static_cast<float> (c1);

    //call the template function for the 3 different variable type parameter cases

    cout << "\nHalf values for \n\n";

    cout << "\t" << "negative double type: " << negArgX2 << " rounds down to " << fixed << showpoint << setprecision(4) << half(negArgX2) << endl;
    cout << "\t" << "negative double type: " << negArgX1 << " rounds up to " << fixed << showpoint << setprecision(4) << half(negArgX1) << endl;
    cout << "\t" << "positive double type: " << posArgX1 << " rounds down to  " << fixed << showpoint << setprecision(4) << half(posArgX1) << endl;
    cout << "\t" << "positive double type: " << posArgX2 << " rounds up to  " << fixed << showpoint << setprecision(4) << half(posArgX2) << endl;
    cout << "\n\n";

    cout << "\t" << "positive float type: " << X << " rounds down to  " << fixed << showpoint << setprecision(2) << half(X) << endl;
    cout << "\t" << "positive float type: " << Y << " rounds up to  " << fixed << showpoint << setprecision(2) << half(Y) << endl;
    cout << "\n\n";

    cout << "\t" << "positive integer type:  " << arg1 << " rounds up to " << fixed << showpoint << setprecision(0) << half(argZ1) << endl;
    cout << "\t" << "positive integer type: " << arg2 << " rounds up to " << fixed << showpoint << setprecision(0) << half(argZ2) << endl;
    cout << "\t" << "negative integer type: " << arg3 << " rounds down to " << fixed << showpoint << setprecision(0) << half(argZ3) << endl;
    cout << "\n\n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\nThis is the final test of the output provided in the Assignment.\n\n";
    cout << "\t" << "Half value for double type: " << a << " is " << fixed << showpoint << setprecision(1) << half(a) << endl;
    cout << "\t" << "Half value for float type: " << b << " is  " << fixed << showpoint << setprecision(1) << half(b) << endl;
    cout << "\t" << "Half vaule for integer type: " << c1 << " rounds up to " << fixed << showpoint << setprecision(0) << half(c) << endl;
    cout << "\n\n";

    system("pause");
    return 0;

}// End main()