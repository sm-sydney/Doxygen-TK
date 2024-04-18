/**
 * @file Employee.h
 * @author Sydney Marshall
 * @date 2024-04-18
 * @brief defines Employee class
 * 
 * includes variables such as ID, yrs of employment, hourly rate, and hours worked. 
declares important functions as well, print, calculatepay and anniversary.
 */


#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years; // years employee has worked 
  
 protected:
  double hourlyRate; // hourly rate of employee 
  float hoursWorked; // number of hours worked by employee
 public:



/**
 * prints data of employee
 *
 * @return virtual 
 * @post employee data is printed  
 * 
 */
  virtual void print();

/**
 * calculates pay
 *
 * @pre n/a
 * @return virtual 
 * @post returns pay based on the rate and hours worked
 * 
 */
  virtual double calculatePay();

/**
 * takes employee anniversary into consideration
 *
 * @pre n/a
 * @return void 
 * @post 1 is added to the employees year(s) of employment and rate is changed
 * 
 */
  void anniversary();

/**
 * constructor for Employee class
 *
 * @pre n/a
 * @post makes Employee object with varibles 
 * 
 */
  Employee();

/**
 * parameterized constructor for Employee class
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre n/a
 * @post makes employee object with values for varibles
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
