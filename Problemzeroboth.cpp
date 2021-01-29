#include <iostream>
#include <string>

using namespace std;

// sets value of var1 and var2 to 0
void zeroBoth(int& var1, int& var2) {
  var1 = 0;
  var2 = 0;
}

int main (int argc, char **argv) {
  int myInt1;
  int myInt2;

  myInt1 = 10;
  myInt2 = 17;

  // prints values of myInt1 and myInt2 before zeroing them with zeroBoth()
  cout << "Int 1 before: " << myInt1 << endl;
  cout << "Int 2 before: " << myInt2 << endl;

  zeroBoth(myInt1, myInt2);

  // prints values of myInt1 and myInt2 after calling zeroBoth()
  // myInt1 and myInt2 should both be 0
  cout << "Int 1 after: " << myInt1 << endl;
  cout << "Int 2 after: " << myInt2 << endl;

  return 0;
}
