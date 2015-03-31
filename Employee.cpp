/* 
 * File:   Employee.cpp
 * Author: MHerzog
 * 
 * Created on March 16, 2015, 5:13 PM
 */

#include <cstdlib>
#include "Employee/Employee.h"


Employee::Employee(int newId, string newName, double newPayRate) {
    id = newId;
    name = newName;
    payRate = newPayRate;
}

Employee::Employee(const Employee& orig) {
    id = orig.id;
    name = orig.name;
    payRate = orig.payRate;
}

int Employee::getId(){
    return id;
}
string Employee::getName(){
    return name;
}
double Employee::getPayRate(){
    return payRate;
}
void Employee::setName(string newName){
    newName = name;
}
double Employee::grossPay(double hours){
    double grossPay = payRate * hours;
    return grossPay;
}
double Employee::netPay(double hours){
    double netPay = grossPay(hours)*(1.0 - TAX_RATE);
    return netPay;
}