/*In C++, the erase() function for vectors is used to remove elements
 from a vector based on the specified position or a range of positions.*/


#include <iostream>
#include <vector>
using namespace std;

// declaring the prototype of function
void beginingErase();
void endingErase();

int main(){

    beginingErase();
    endingErase();

    return 0;
}

// to erase from begininng. The function is: vector_name.begin();
void beginingErase(){
    vector <int> vec = {2, 6, 3, 8, 0, 9, 5, 7, 1};

    cout << "The vector is: " << endl;
    for (int i : vec){
        cout << i << "  ";
    }

    // to Etase the third element of vector 
    vec.erase(vec.begin() + 2);    // because third element index no is 2
    
    cout << "\n\n" << "After erase the vector is: " << endl;
    for (int i : vec){
        cout << i << "  ";
    }
    
}




// to erase from ending. The function is: vector_name.end();
void endingErase(){
    vector <int> vec = {2, 6, 3, 8, 0, 9, 5, 7, 1};

    cout << "\n\n" << "The vector is: " << endl;
    for (int i : vec){
        cout << i << "  ";
    }

    // to Etase the second element from ending of vector 
    vec.erase(vec.end() - 2);   
    
    cout << "\n\n" << "After erase the vector is: " << endl;
    for (int i : vec){
        cout << i << "  ";
    }
    
}