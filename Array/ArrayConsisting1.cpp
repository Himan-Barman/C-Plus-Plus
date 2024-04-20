#include <iostream>
using namespace std;

int main() {
    int size = 8;
    int array[] = {1, 0, 1, 1, 0, 0, 1, 0};
    int fast = 0, last = size - 1;

    while (fast < last) {
        if (array[fast] == 0) {
            fast++;
        } else {
            swap(array[fast], array[last]);
            last--;
        }
    }

    cout << "The final array is: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
