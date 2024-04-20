#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string name;

    public:
        void set(string a){
            name = a;
        }

        string get(){
            return name;
        }

};

int main(){
    Car BMW;
    BMW.set("BMW i8");
    cout << BMW.get() << endl;

    return 0;
}