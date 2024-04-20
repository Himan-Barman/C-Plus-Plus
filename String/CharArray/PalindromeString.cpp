#include <iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++;
    }

    return count;
}

bool checkPalindrome(char name[]){
    int length = getLength(name);
    int i = 0, j = length - 1;

    while(i <= j){
        if(name[i] != name[j]){
            return 0;
        }

        else{
            i++;
            j--;
        }
    }
    return 1;
}

int main(){
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "The string is Palindrome: " << checkPalindrome(name) << endl;
    return 0;
}