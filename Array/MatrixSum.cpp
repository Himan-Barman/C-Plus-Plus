#include <iostream>
using namespace std;

int main(){
    int m, n;

    cout << endl << "Enter the Row size of Array: " ;
    cin >> m;
    cout << "Enter the Column size of Array: ";
    cin >> n;
    cout << endl;

    int arr1[m][n], arr2[m][n], sum[m][n];


    cout << "Enter the input of First Array: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr1[i][j];
        }
    }
    cout << endl;

    cout << "Enter the input of Second Array: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    // Calculating Sum of those Matrix
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "The Sum of those Array is: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}