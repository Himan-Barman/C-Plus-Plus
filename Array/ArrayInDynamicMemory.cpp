#include <iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int n;

    cout << endl << endl;

    cout << "Enter the size of Array: " << endl;
    cin >> n;

    // Variable size array
    int *arr = new int[n];

    cout << endl << "Enter the array element: " << endl;
    // Taking input in array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << endl << endl;

    cout << "The sum of array element is: " << ans << endl;

    cout << endl << endl;

    return 0;
}