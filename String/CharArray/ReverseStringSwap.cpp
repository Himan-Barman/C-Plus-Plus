// Reverse a string using swap function 
#include <iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++;
    }

    return count;
}

void getReverse(char name[]){
    int length = getLength(name);
    int start = 0, end = length - 1;

    while(start < end){
        swap(name[start], name[end]);
        start ++;
        end--;
    }
}

int main(){
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;

    getReverse(name);
    cout << "The reverse is: " << name << endl;

    return 0;
}