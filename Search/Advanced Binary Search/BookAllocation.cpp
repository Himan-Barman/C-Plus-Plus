// WAP to allocate minimum number of Page of Book for every student in continously

#include <iostream>
using namespace std;

// Book allocation is Possible or not for all the student 
bool isPosible(int arr[], int size, int student, int mid){
    int studentCount = 1, pageSum = 0;

    for(int i = 0; i < size; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;

            if(studentCount > student || arr[i] > mid){
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}


// Book Allocation for the Student 
int allocateBook(int arr[], int size, int student){
    int start = 0, sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    int end = sum, answer = -1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(isPosible(arr, size, student, mid)){
            answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return answer;
}


// Main function
int main(){
    int size = 4, student = 2;
    int arr[size] = {10, 20, 30, 40};

    int result = allocateBook(arr, size, student);

    cout << "Minimum Page is: " << result << endl;

    return 0;
}