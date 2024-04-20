// treverse started from the begining of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // this element's last position we want to find
    bool sorted = true;

    for (int i = 0; i < vec.size(); i++){

        if (vec[i] > vec[i + 1]){
            sorted = false;
            break;
        }
    }

    if (sorted){
        cout << "The Vector is Sorted." << endl;
    }
    else{ 
        cout << "The Vector is not Sorted." << endl;
    }

    return 0;
}