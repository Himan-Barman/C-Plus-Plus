#include <iostream>
using namespace std;

#define AREA(length, bredth) (length * bredth)

int main(){
    int l, b, result = 0;

    cout << endl;

    cout << "Enter the Length of Rectangle: " << endl;
    cin >> l;

    cout << "Enter the bredth of Rectangle: " << endl;
    cin >> b;

    cout << endl;

    result = AREA(l, b);

    cout << "The Area is: " << result << endl;
    cout << endl;

    return 0;
}