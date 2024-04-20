#include <iostream>
using namespace std;

int main(){
    char a[] = "Himan", b[] = "Ushri";
    int num;
    char *result;

    cout << endl << "Enter Your Choice: \n 1. Boy \n 2. Girl" << endl;
    cout << endl;
    cin >> num;

    result = (num == 1) ? a : b;

    cout << endl;

    cout << "The result is: " << result << endl;
    cout << endl;

    return 0;
}