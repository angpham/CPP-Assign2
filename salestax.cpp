#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) { // Function to add tax to subtotal
    float value;
    value = cost + (cost * (taxRate/100)); // Multiply tax rate to change into decimal form for calculation
    return value;
}

int main(int argc, char **argv) {
    float rate = atof(argv[1]); // Command Line Input
    // Tax Rate (XX.XX - Do not put %)
    float sub = atof(argv[2]); // Command Line Input
    // Before Tax (XX.XX - Do not put $)
    float total; // After Tax

    total = addTax(rate, sub); // Function Call
    cout << "Total Cost: $" << total << endl; // Output

    return 0;
}
