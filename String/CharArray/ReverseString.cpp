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

    for(int i = 0; i < length / 2; i ++){
        char temp = name[i];
        name[i] = name[length - i - 1];
        name[length - i - 1] = temp;
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