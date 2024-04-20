#include <iostream>
using namespace std;

int squareRoot(int arr[], int n){
    int s = 0, e = n - 1;
    long long int mid;
    long long int ans = -1;

    while(s <= e){
        mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if(square == n){
            return mid;
        }

        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return ans;
}

int main(){
    int arr[10] = {50, 60, 70, 80, 90, 100, 10, 20, 30, 40};

    int result = squareRoot(arr, 40);

    cout << "The Square Root is: " << result << endl;

    return 0;
}