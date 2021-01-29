#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// calculates sales tax and returns the cost including the sales tax
float addTax(float taxRate, float cost) {
  float salesTax;
  float costWithTax;

  salesTax = cost * (taxRate / 100);
  costWithTax = cost + salesTax;

  return costWithTax;
}

int main (int argc, char **argv) {
  float taxRate;
  float cost;
  float costWithTax;

  // gets tax rate from user
  cout << "Enter tax rate as percent: " << endl;
  cin >> taxRate;

  // gets cost of item from user
  cout << "Enter cost of item before tax: " << endl;
  cin >> cost;

  // calculates cost of item including tax
  costWithTax = addTax(taxRate, cost);

  cout << "Cost with tax: $" << fixed << setprecision(2) << costWithTax << endl;

  return 0;
}
