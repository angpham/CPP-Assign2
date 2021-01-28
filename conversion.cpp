#include <iostream>
#include <string>
using namespace std;

void userInput(int &feet, int &inches) { // Pass-by-Reference
    cout << "Enter the length!" << endl;
    cout << "Feet: "; // Only enter whole feets
    cin >> feet;
    cout << "Inches: "; // Only enter whole inches
    cin >> inches;
}

float totalFeet(int feet, int inches) { // Function calculates inputs into feet
    float tot_feet;
    tot_feet = feet + (inches/12.00); // 1 feet = 12 inches
    return tot_feet;
}

float totalCenti(float tot_feet) { // Converts feet into centimeters
    float tot_centi;
    tot_centi = tot_feet * .3048 * 100; // 1 feet = .3048 meters; 1 meter = 100 centimeters
    return tot_centi;
}

void convert(int &meter, float &centi, float tot_centi) { // Solve for meters and centimenters
    meter = tot_centi/100; // Using int for meters to get whole meters
    centi = tot_centi - (meter * 100); // Centimeters left over after finding meters
}

void console(int ft, int in, int m, float cm) { // Output Formula
    cout << ft << " feet, " << in << " inches --> " << m << " meters, " << cm << " centimeters" << endl;
}

int main(int argc, char **argv) {
    int feet = 0; // User Input
    int inches = 0; // User Input
    int meter = 0;
    float centi = 0;
    string cont; // User Input

    while (cont != "exit") {
        userInput(feet, inches); // Get user input from function
        convert(meter, centi, totalCenti(totalFeet(feet, inches))); // Function-within-Function --> one of the functions used is a parameter
        console(feet, inches, meter, centi); // Output through function
        cout << "Do you want to continue? Type 'exit' to end, or anything else to continue." << endl;
        cin >> cont; // Ask if user wants to continue converting measurements
    }
}
