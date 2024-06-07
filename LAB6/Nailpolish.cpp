#include <iostream>
using namespace std;
// ACTIVITY 1.1 
class NailPolish {
// Attributes for Nail Polish 
private:
    string brand; 
    string color;
    float price;
// Constructor 
public:
    NailPolish(string y, string x, float z) {
        brand = x;
        color = y;
        price = z;
    }
// Member function for displaying the Nail Polish attributes
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Using the constructor for Nail Polish
    NailPolish nailpolish("OMG", "Pink", 30.29);
    // Using the displaying function for Nail Polish Details 
    nailpolish.displayDetails();
    return 0;
}
