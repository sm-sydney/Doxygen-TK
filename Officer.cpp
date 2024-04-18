/**
 * @file Officer.cpp
 * @author Sydney Marshall
 * @date 2024-04-18
 * @brief implements the purpose of the Officer class 
 * 
 * implementation of Officer class and extending on things from the Employee class just for Officer features
 */


#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  // default = 500
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  // initialize officer with values
  this->evilness = evilness;
}

void Officer::print() {
  // prints officer data and evilness 
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  // calculates pay plus evilness benefit added
  return (hourlyRate + evilness) * hoursWorked;
}
