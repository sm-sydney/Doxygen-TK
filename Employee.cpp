/**
 * @file Employee.cpp
 * @author Sydney Marshall
 * @date 2024-04-18
 * @brief implementation for testing of classes
 * 
 * driver for testing functionality of classes.
 */


#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  // constructor that initializes all variables to -1 
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  // constructor that initializes variables with values 
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

void Employee::print() {
  //prints the employee's information 
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

void Employee::anniversary() {
  //adds years to employment and changes the rate for their anniversary 
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}
//determines pay 
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

