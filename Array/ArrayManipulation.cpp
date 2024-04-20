/* Find the total number of Triples(three numbers) in the Array 
 whose sum is equal to the given value of target */

#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> vec = {3, -5, 8, 2, 1, 7, 9, -5};

    int i, j;
    int pair = 0, count = 0;
    int value = 0;

    for (i = 0; i < vec.size(); i++){
        for (j = i + 1; j < vec.size(); j++){

            if (vec[i] == vec[j]){
                pair ++;
            }
        }
    }

    
    cout << "The number of Pair is: " << pair << endl;
    
    
    return 0;
}