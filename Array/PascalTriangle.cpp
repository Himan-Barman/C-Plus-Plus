#include <iostream>
using namespace std;

int main(){
    int size; // Row of Pascal Triangle
    int a; // a for Space of Pascal Triangle
    int j; // j for Column of Pascal Triangle
    int n = 1; // n is Element of Pascal Triangle

    cout << "Enter the size of Pascal Triangle: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        for(a = 0; a <= size - 1; a++){
            //cout << " ";
        }

        for(j = 0; j <= i; j++){
            if(j == 0 || i == 0)
                n = 1;
            else
                n = n * (i - j + 1) / j;

            cout << n ;
        }
        
        cout << endl;
    }

    return 0;
}