#include <iostream>
#include <vector>

using namespace std;

void Description() {
    cout << "Convert decimal number to binary\n";
    cout << "Programmer: Chello G. Serion\n";
    cout << "Date: April 27, 2024\n";
    cout << "Subject Number: 28\n";
}

// Read Input
int read() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    return num;
}

// Convert decimal to binary
vector<int> Decimal_Binary(int num) {
    vector<int> binary;
    while (num > 0) {
        binary.insert(binary.begin(), num % 2);
        num /= 2;
    }
    return binary;
}

// Display result
void display(vector<int> binary) {
    cout << "Binary Equivalent: ";
    for (int bit : binary) {
        cout << bit;
    }
    cout << endl;
}

int main() {
    int decimal;
    vector<int> binary;

    Description();

    // Read
    decimal = read();

    // Convert 
    binary = Decimal_Binary(decimal);

    // Display 
    display(binary);

    return 0;
}
