#include <iostream>
#include <vector>
using namespace std;
void itsVector();
void itsAlsoVector();

int main(){

    itsVector();
    itsAlsoVector();

    return 0;
}

// First way to input vector element
void itsVector(){
    vector <int> vec;
    int size;

    cout << "Enter the size of Vector: ";
    cin >> size;

    cout << "Enter the Vector Element: " << endl;
    for (int i = 0; i < size; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    cout << "\n\n" << "The Vector is: ";
    for (int i : vec){
        cout << i << " ";
    }

    
}

// Second way to input vector element
void itsAlsoVector(){
    vector <int> vec;
    int size;

    cout << "\n\n" << "Enter the size of Vector: ";
    cin >> size;

    cout << "Enter the Vector Element: " << endl;
    for (int i = 0; i < size; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    cout << "\n\n" << "The Vector is: ";
    for (int i = 0; i < size; i++){
        cout << vec[i] << " ";
    }

    
}