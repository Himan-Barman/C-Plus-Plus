#include <iostream>
using namespace std;

int main(){
    int* ptr = (int*) malloc(10 * 4);
    cout << ptr << endl;
    
    ptr = (int*) realloc(ptr, 2000 * 4);
    cout << ptr << endl;

    return 0;
}