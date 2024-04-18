/**
 * @file Officer.h
 * @author Sydney Marshall
 * @date 2024-04-18
 * @brief defines Officer class
 * 
 * header file for Officer class. declares functions such as print and calculate pay like employee.h but altered
 */


#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * prints data of officer
 *
 * @pre n/a
 * @return void 
 * @post officer data is printed
 * 
 */
  void print();

/**
 * calculates pay
 *
 * @pre n/a
 * @return double 
 * @post pay is calculated and returned
 * 
 */
  double calculatePay();

/**
 * default constructor
 *
 * @pre n/a
 * @post officer object is made with along with evilness 
 * 
 */
  Officer();

/**
 * parameterized constrictor
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre n/a
 * @post officer object is made 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
