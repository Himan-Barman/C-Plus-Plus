#include <iostream>
using namespace std;

void prime(int num){

    int count = 0;

    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            count++;
            break;
        }
    }

    if(count == 0){
        cout << "The Number " << num << " is a Prime Number." << endl;
    }
    else{
        cout << "The Number " << num << " is not a Prime number." << endl;
    }
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    prime(num);

    return 0;
}
