// Here we calculate a query base sum of an array that follow 1 based indexing

#include <iostream>
using namespace std;

int main(){
    int size = 8, start = 2, end = 6, sum = 0;
    int first = start - 1;
    int array[size] = {7, 4, 2, 7, 9, 4, 5, 6};

    for (int i = 0; i < end; i ++){
        sum += array[first + i];
    }

    cout << "The Sum of these queries is: " << sum << endl;

    return 0;
}