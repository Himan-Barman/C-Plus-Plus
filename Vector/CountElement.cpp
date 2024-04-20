// treverse started from the begining of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {2, 4, 3, 2, 5, 7, 1, 2, 9, 6, 2};

    int num = 2; // this element's last position we want to find
    bool found = false;
    int count = 0;

    for (int i : vec){

        if (i == num){
            found = true;
            count ++;
        }
    }

    if (found){
        cout << "The element " << num << " found " << count << " times";
    }
    else{
        cout << "The Element " << num << " is not present in this Vector.";
    }


    return 0;
}