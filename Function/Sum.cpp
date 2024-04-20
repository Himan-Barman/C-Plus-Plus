#include <iostream>
using namespace std;

int sum(int num1, int num2){
    return num1 + num2;
}

int main(){

    int num1, num2, result;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    result = sum(num1, num2);
    cout << "The result is: " << result << endl;

    return 0;

}