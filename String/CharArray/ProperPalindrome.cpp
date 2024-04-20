#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if('a' <= ch && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

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
        if(toLowerCase(name[i]) != toLowerCase(name[j])){
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