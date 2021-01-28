#include <iostream>
using namespace std;

void zeroBoth(int &var1, int &var2) { // Parameters pass-by-reference; Function change values to 0
    var1 = 0;
    var2 = 0;
}

int main(int argc, char **argv) {
    int num1 = atoi(argv[1]); // Command Line Input
    int num2 = atoi(argv[2]); // Command Line Input

    zeroBoth(num1, num2); // Function Call
    cout << "After --> Num 1: " << num1 << ", Num 2: " << num2 << endl;

    return 0;
}
