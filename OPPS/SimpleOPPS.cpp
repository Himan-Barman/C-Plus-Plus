#include <iostream>
#include <string>
using namespace std;

class Fruits {
public:
    string name;
    string color;
};

int main() {
    // Creating objects of class Fruits
    Fruits Apple;
    Fruits Mango;

    // Assigning values to object properties
    Apple.name = "Apple";
    Apple.color = "Red";

    Mango.name = "Mango";
    Mango.color = "Yellow";

    // Displaying the details of fruits
    cout << "Details of Apple:" << endl;
    cout << "Name: " << Apple.name << endl;
    cout << "Color: " << Apple.color << endl << endl;

    cout << "Details of Mango:" << endl;
    cout << "Name: " << Mango.name << endl;
    cout << "Color: " << Mango.color << endl;

    return 0;
}
