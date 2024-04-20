#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "Enter a Number: " << endl;
    cin >> a ;

    if (a % 2 == 0){
        cout << "The Number is a Even Number." << endl;
    }
    else{
        cout << "The Number is a Odd Number." << endl;
    }

    return 0;

}