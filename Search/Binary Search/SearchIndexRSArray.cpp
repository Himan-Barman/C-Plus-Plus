// Search Element's Index in a Rotated Sorted Array

#include <iostream>
using namespace std;

int getPivotValue(int arr[], int n, int key){
    int s = 0, e = n - 1, mid;

    while(s <= e){
        mid = s + (e - s) / 2;
        
        if(arr[mid] == key){
            return mid;
        }

        if(arr[s] < arr[mid]){
            if(key >= arr[s] && key < arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(key > arr[mid] && key <= arr[e]){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
        }

    }


    return -1;
}

int main(){
    int arr[10] = {50, 60, 70, 80, 90, 100, 10, 20, 30, 40};
    int key = 20;

    int result = getPivotValue(arr, 10, key);

    if(result != -1){
        cout << "The Pivot Value Index is: " << result << endl;
    }
    else{
        cout << "The Element is Not Found!" << endl;
    }

    return 0;
}