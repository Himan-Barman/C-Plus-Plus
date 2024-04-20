#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0, e = n - 1, mid;

    while(s < e){
        mid = s + (e - s) / 2;

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }

    return s;
}

int main(){
    int arr[10] = {50, 60, 70, 80, 90, 100, 10, 20, 30, 40};

    int result = getPivot(arr, 10);

    cout << "The Pivot Index is: " << result << endl;

    return 0;
}