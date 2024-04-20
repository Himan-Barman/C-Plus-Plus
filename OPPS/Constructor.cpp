#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    public:
        int length;
        int bredth;

    Rectangle(){    // default constructor (no arguments passed)
        length = 4;
        bredth = 3;
    }

    Rectangle(int x, int y){ // parameterised constructor - arguments passed
        length = x;
        bredth = y;
    }

    Rectangle(Rectangle &r){    // copy constructor - initialise an obj by anothor exist obj
        length = r.length;
        bredth = r.bredth;
    }

};

int main(){

    Rectangle rec1;
    cout << rec1.length << "    " << rec1.bredth << endl;

    Rectangle rec2(8, 4);
    cout << rec2.length << "    " << rec2.bredth << endl;

    Rectangle rec3 = rec2;
    cout << rec3.length << "    " << rec3.bredth << endl;


    return 0;
}