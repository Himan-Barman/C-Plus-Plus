#include <iostream>
using namespace std;

// Pass by Value
// int update(int n){

//     return ++n;
// }

// Pass by Refference
void update1(int &n){
    n++;
}

int main(){
    int a = 5;
    // int &b = a;

    // cout << a << endl;
    // a++;
    // cout << a << endl;
    // b++;
    // cout << a << endl;

    cout << a << endl;
    update1(a);
    cout << a << endl;
    update1(a);
    cout << a << endl;




    return 0;
}