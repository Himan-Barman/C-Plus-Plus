#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> qu;

    qu.push(10);
    qu.push(20);

    while(not qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }


    return 0;
}