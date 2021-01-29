#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// gets user input and sets feet and inches variables or exits the program
void GetUserInput(string& userInput, int& feet, int& inches) {
  istringstream inSS;

  cout << "Enter length in feet & inches (separated by a space) or \"exit\": " << endl;
  getline(cin, userInput);

  if (userInput != "exit") {
    inSS.clear();
    inSS.str(userInput);
    inSS >> feet;
    inSS >> inches;
  }
}

// converts feet and inches to meters and centimeters using the conversions
// 1 ft = 0.3048 m and 1 in = 0.0254 m
void ConvertToMAndCm(int& feet, int& inches, int& meters, float& cm) {
  double totalLength;
  totalLength = (feet * 0.3048) + (inches * 0.0254);
  meters = totalLength / 1;
  cm = (totalLength - meters) * 100;
}

// prints out converted meter and centimeter values
void OutputToUser(int& feet, int& inches, int& meters, float& cm) {
  cout << feet << "ft and " << inches << "in converts to "<< meters << "m and " << cm << "cm" << endl;
}

int main (int argc, char **argv) {
  string userInput;
  int feet;
  int inches;
  int meters;
  float cm;

  GetUserInput(userInput, feet, inches);

  // loop continues to convert f/in to m/cm as long as user does not type in "exit"
  while (userInput != "exit") {
    ConvertToMAndCm(feet, inches, meters, cm);
    OutputToUser(feet, inches, meters, cm);
    GetUserInput(userInput, feet, inches);
  }

  return 0;
}
