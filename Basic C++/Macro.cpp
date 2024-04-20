#include <iostream>
using namespace std;

#define PI 3.14 // This is Macro 

int main(){
    double r, result = 0;

    cout << endl << endl;
    cout << "Enter the Radius of Circle: " << endl;
    cin >> r;

    result = PI * r * r;

    cout << endl;
    cout << "The Area of Circle is: " << result << endl;

    cout << endl << endl;

    return 0;
}