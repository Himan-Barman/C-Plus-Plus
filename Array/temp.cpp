#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findUniqueSorted(vector<int>& arr) {
    int n = arr.size();

    // If only one element or first element is unique
    if (n == 1 || arr[0] != arr[1]) {
        return arr[0];
    }

    // If last element is unique
    if (arr[n - 1] != arr[n - 2]) {
        return arr[n - 1];
    }

    // Check for unique element in middle
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
            return arr[i];
        }
    }

    return -1;  // No unique element found
}

int main() {
    vector<int> arr = {2, 2, 3, 3, 4, 7, 5, 5};
    int unique = findUniqueSorted(arr);
    cout << "Unique number: " << unique << endl;  // Output: 4
    return 0;
}
