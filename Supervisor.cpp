/**
 * @file Supervisor.cpp
 * @author Sydney Marshall
 * @date 2024-04-18
 * @brief implements practices from Supervisor class
 * 
 * defines member functions of Supervisor class. functions are implemented 
 */


#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
  //initialize number supervised to -1
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  //initialize num supervised w/ value 
  this->numSupervised = numSupervised;
}

void Supervisor::print() {
  //base print function 
  Employee::print();
  //prints num supervised 
  cout << " Number Supervised: " << numSupervised << endl;
}

double Supervisor::calculatePay() {
  //calculate pay using base class
  double val = Employee::calculatePay();
  //changes pay based on num supervised
  val = val + val * (.01 * numSupervised);
  //return calculated pay
  return val;
}
