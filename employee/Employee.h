/* 
 * File:   Employee.h
 * Author: Mariana Herzog, Ryan Nichols
 *
 * Created on March 16, 2015, 5:13 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>

using namespace std;
class Employee {
    
    
public:
    int getId();
    string getName();
    double getPayRate();
    void setName(string newName);
    double grossPay(double hours);
    double netPay(double hours);
    const double TAX_RATE = 0.25;
    Employee(int newId, string newName, double newPayRate);
    Employee(const Employee& orig);
private:
    int id;
    string name;
    double payRate;
};

#endif	/* EMPLOYEE_H */