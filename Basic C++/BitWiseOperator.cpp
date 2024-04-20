#include <iostream>
using namespace std;

int main(){
    int a = 5; // 0101
    
    // Left Shift
    cout << (a << 1) << endl; //10

    // Right Shift
    cout << (a >> 1) << endl; //2

    int b = 8; // 1000

    // BitWise AND
    cout << (a & b) << endl; //0

    // BitWise OR
    cout << (a | b) << endl; // 1101 = 13

    // SizeOf Operator
    cout << sizeof(a) << endl;  // 4

    // Ternery Opertor
    bool flag;
    a == b ? flag = true : flag == false;
    cout << flag << endl; // 0

    // Casting Operator 
    float c = 7.899786;
    int d = (int) c;
    cout << d << endl; // 7
     
    // Address Operator 
    cout << (&a) << endl;

    return 0;
}