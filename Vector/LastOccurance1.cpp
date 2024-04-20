// here we started the treverse of vector from the end 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {2, 4, 3, 2, 5, 7, 1, 2, 9, 6, 2};

    int num = 2; // this element's last position we want to find
    bool found = false;
    int index = 0;

    for (int i = vec.size() - 1; i >= 0; i--){
        if (vec[i] == num){
            index = i;
            found = true;
            break;
        }
    }

    if (found){
        cout << "The element " << num << "'s " << "Occurance is: " << index ;
    }
    else{
        cout << "The Element " << num << " is not present in this Vector.";
    }


    return 0;
}