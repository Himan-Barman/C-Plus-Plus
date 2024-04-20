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

    cout << "Enter the Number: " << endl;
    cin >> n;

    // Variable size in array
    int *arr = new int[n];

    // taking input in array
    cout << "Enter the value of Array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "The answer is: " << ans << endl;

    return 0;
}