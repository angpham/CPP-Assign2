#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int size = 10;
    int numberArray[size];
    int num;
    int counter = 0;

    for (int i = 1; i <= argc; ++i) {
      num = atoi(argv[i]); // Command Line Inputs
      if (num < 0) { // If command line input is negative, move on to next input
        continue;
      }
      else {
        numberArray[counter] = num; // Read number into array
        counter = counter + 1;
      }
      if (counter == size) { // Once array is full, stop reading in command line inputs
        break;
      }
    }

    for (int j = 0; j < size; ++j) { // For loop to print each value
      cout << "numberArray[" << j << "]: " << numberArray[j] << endl;
    }

    return 0;
}
