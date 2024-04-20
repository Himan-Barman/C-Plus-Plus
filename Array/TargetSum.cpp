/* Find the total number of pairs(two numbers) in the Array 
 whose sum is equal to the given value of target */

#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> vec = {3, 5, 6, 2, 1, 9, -2, 4, 15, -8};

    int pair = 0, target = 7;

    for (int i = 0; i < vec.size(); i++){
        for (int j = i + 1; j < vec.size(); j++){

            if (vec[i] + vec[j] == target){
                pair ++;
            }
        }
    }

    cout << "The number of Pair is: " << pair << endl;
    
    return 0;
}