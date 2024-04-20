/* Find the total number of Triples(three numbers) in the Array 
 whose sum is equal to the given value of target */

#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> vec = {3, 1, 4, 5, 2, -1};

    int pair = 0, target = 7;

    for (int i = 0; i < vec.size(); i++){
        for (int j = i + 1; j < vec.size(); j++){
            for (int u = j + 1; u < vec.size(); u++){

                if (vec[i] + vec[j] + vec[u] == target){
                    pair ++;
                }
            }
        }
    }

    cout << "The number of Pair is: " << pair << endl;
    
    return 0;
}