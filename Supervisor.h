/**
 * @file Supervisor.h
 * @author Sydney Marshall
 * @date 2024-04-18
 * @brief declares Supervisor class
 * 
 * inherits from Employee class but adds additional items related to supervising 
 */


#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints data of supervisor
 *
 * @pre n/a
 * @return void 
 * @post supervisor data is printed
 * 
 */
  void print();

/**
 * calculates pay for supervisor
 *
 * @pre n/a
 * @return double 
 * @post supervisor pay is calculated and returned
 * 
 */
  double calculatePay();

/**
 * default constructor for Supervisor class
 *
 * @pre n/a
 * @post Supervisor object is made
 * 
 */
  Supervisor();

/**
 * parameterized constructor
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre n/a
 * @post supervisor object is made
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
