#include <iostream>
using namespace std;

int main(){
    int num = 5, factorial = 1;

    for (int i = 1; i <= num; i++){
            factorial *= i;
    }

    cout << "The Factorial is: " << factorial;

    return 0;
}