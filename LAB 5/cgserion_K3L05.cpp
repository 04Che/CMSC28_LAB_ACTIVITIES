#include <iostream>
#include <cmath>

using namespace std;

void Data(int UserData[], int& count);
int Maxi(int UserData[], int count);
int Mini(int UserData[], int count);
double calcAve(int UserData[], int count);
double calculateSD(int UserData[], int count, double avg);
double calculateVar(int UserData[], int count, double avg);
void output(int maxVal, int minVal, double avg, double stdDev, double var);

int main() {
     // Print the header information
    cout << "Programming Exercise 05\n\n";
    cout << "Submitted by: Chello G. Serion\n";
    cout << "------------------------------------------------------------------------------------------------------------------------------\n";

    int num[10];
    int count = 0;
    Data(num, count);

    int maxVal = Maxi(num, count);
    int minVal = Mini(num, count);
    double avg = calcAve(num, count);
    double stdDev = calculateSD(num, count, avg);
    double var = calculateVar(num, count, avg);

    output(maxVal, minVal, avg, stdDev, var);

    return 0;
}

void Data(int UserData[], int& count) {
    cout << "Input an integer: ";
    int input;
    while (cin >> input && input != 0 && count < 10) {
        UserData[count++] = input;
        if (count < 10) cout << "Input another integer: ";
    }
}

int Maxi(int UserData[], int count) {
    int maxVal = UserData[0];
    for (int i = 1; i < count; i++) {
        if (UserData[i] > maxVal) maxVal = UserData[i];
    }
    return maxVal;
}

int Mini(int UserData[], int count) {
    int minVal = UserData[0];
    for (int i = 1; i < count; i++) {
        if (UserData[i] < minVal) minVal = UserData[i];
    }
    return minVal;
}

double calcAve(int UserData[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += UserData[i];
    }
    return sum / count;
}

double calculateSD(int UserData[], int count, double avg) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += pow(UserData[i] - avg, 2);
    }
    return sqrt(sum / count);
}

double calculateVar(int UserData[], int count, double avg) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += pow(UserData[i] - avg, 2);
    }
    return sum / count;
}

void output(int maxVal, int minVal, double avg, double stdDev, double var) {
    cout << "Largest = " << maxVal << endl;
    cout << "Smallest = " << minVal << endl;
    cout << "Average = " << avg << endl;
    cout << "Standard deviation = " << stdDev << endl;
    cout << "Variance = " << var << endl;
}
