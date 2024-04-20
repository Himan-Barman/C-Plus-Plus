#include <iostream>
using namespace std;

int arrSum(int arr[], int size){
    int sum = 0;

    for(int i = 0; i <size; i++){
        sum += arr[i];
    }

    return sum;
}


bool isPosible(int arr[], int student, int mid, int size){
    int studentNo = 1, pages = 0;

    for(int i = 0; i < size; i++){
        if(pages + arr[i] <= mid){
            pages += arr[i];
        }
        else{
            studentNo ++;

            if(studentNo > student || arr[i] > mid){
                return false;
            }
            
            pages = arr[i];
        }
    }

    return true;
}


int bookAllocate(int arr[], int student, int size){
    int min = 0, mid, max, result = -1;
    max = arrSum(arr, size);

    while(min <= max){
        mid = min + (max - min) / 2;

        if(isPosible(arr, student, mid, size)){
            result = mid;
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }
    }

    return result;
}


int main(){
    int size = 4, student = 2;
    int arr[size] = {10, 20, 30, 40};

    int Answer = bookAllocate(arr, student, size);

    cout << "Maximum No of Page: " << Answer << endl;

    return 0;
}