#include <iostream>
#include <string>
using namespace std;

class Fruit {
    public:
        string name;
        string color;
};

int main() {
    // 1st way to define object of a class
    Fruit Apple;
    
    Apple.name = "Apple";
    Apple.color = "Red";
    cout << Apple.name <<"      "<< Apple.color << endl;

    // 2nd way to define object of a class
    Fruit *mango = new Fruit;

    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << "    " << mango->color << endl;

    return 0;
}