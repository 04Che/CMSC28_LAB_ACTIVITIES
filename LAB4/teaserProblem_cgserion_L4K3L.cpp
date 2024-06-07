#include <iostream>

using namespace std;

void Description() {
    cout << "Find the highest and lowest numbers among three inputs\n";
    cout << "Programmer: Chello G. Serion\n";
    cout << "Date: April 27, 2024\n";
    cout << "Subject Number: 28 \n";
}

void User_Data(int& x, int& y, int& z) {
    cout << "Enter three numbers (x, y, z): ";
    cin >> x >> y >> z;
}

int highest_Num(int x, int y, int z) {
    return max(max(x, y), z);
}

int smaller_Num(int x, int y, int z) {
    return min(min(x, y), z);
}

void display_Data(int x, int y, int z, int largeNum, int smallNum, int diff) {
    cout << "Input Numbers:\n";
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "Highest Number: " << largeNum << endl;
    cout << "Lowest Number: " << smallNum << endl;
    cout << "Difference: " << diff << endl;
}

int main() {
    int x, y, z, largeNum, smallNum, diff;

    Description();

    // Read input 
    User_Data(x, y, z);

    largeNum = highest_Num(x, y, z);
    smallNum= smaller_Num(x, y, z);

    // Calculate 
    diff = largeNum - smallNum;

    // Display 
    display_Data(x, y, z, largeNum, smallNum, diff);

    return 0;
}
