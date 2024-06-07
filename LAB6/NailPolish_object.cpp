#include "NailPolish.h"
// ACTIVITY 1.2
// Class Implementation 

// Constructor Implementation 
NailPolish::NailPolish(string y, string x, float z) {
    brand = x;
    color = y;
    price = z;
}
// Implementing display function for Nail Polish Details
void NailPolish::displayDetails() {
    cout << "Brand: " << brand << endl 
         << "Color: " << color << endl 
         << "Price: " << price << endl;
}

int main() {
    // Creating object for Nail Polish
    NailPolish nailpolish("OMG", "Pink", 30.29);
    // Displaying it's details 
    nailpolish.displayDetails();
    return 0;
}
