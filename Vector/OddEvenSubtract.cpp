// treverse started from the begining of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 1, 2, 1, 2};

    // this element's last position we want to find
    int answer = 0;

    for (int i = 0; i < vec.size(); i++){

        if (i % 2 == 0){
            answer += vec[i];
        }
        else{
            answer -= vec[i];
        }
    }

    cout << "The answer is: " << answer << endl;

    return 0;
}