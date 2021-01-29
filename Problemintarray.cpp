#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  int userNum;
  int numberArray[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
  int count = 0;

  cout << "Enter positive integers (to stop, type in negative integer): " << endl;
  cin >> userNum;

  // adds up to 10 positive, user-entered integers to numberArray
  while (userNum >= 0 && count < 10) {
    numberArray[count] = userNum;
    count++;
    if (count < 10) {
      cin >> userNum;
    }
  }

  cout << "Integers: ";

  // prints out integers from numberArray
  for (int i = 0; i < count; ++i) {
    if (numberArray[i] != -1) {
      cout << numberArray[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
